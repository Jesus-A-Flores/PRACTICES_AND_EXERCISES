#include <iostream>
#include <cstring>
#include <list>

using namespace std;

struct Fecha{
    int dia, mes, anio;
};

struct Estudiante{
    int ci;
    char nombre[30];
    float nota;
    Fecha fecNac;
    bool estado;

    void insert(int ci, char nombre[], float nota, Fecha fecNac, bool estado){
        this->ci = ci;
        strcpy(this->nombre, nombre);
        this->nota = nota;
        this->fecNac = fecNac;
        this->estado = estado;
    }

    void mostrar(){
        cout << "C.I.: " << ci << "\n";
        cout << "Nombre: " << nombre << "\n";
        cout << "Nota: " << nota << "\n";
        cout << "Fec. Nac.: " << fecNac.dia << "/" << fecNac.mes << "/" << fecNac.anio << "\n";
        cout << "Estado: " << (estado ? "Activo" : "Inactivo") << "\n";
    }
};

int main(){
    list <Estudiante> lista;
    list <Estudiante>::iterator it;
    Estudiante aux;
    /// Llenado de algunos estudiantes
    aux.insert(1, "Joel", 63.50, {10, 10, 2010}, 1); lista.push_back(aux);
    aux.insert(2, "Ana", 75.25, {5, 5, 2009}, 1); lista.push_back(aux);
    aux.insert(3, "Carlos", 80.00, {15, 3, 2000}, 0); lista.push_back(aux);
    aux.insert(4, "Sofia", 35.00, {20, 7, 2005}, 1); lista.push_back(aux);
    aux.insert(5, "Elena", 45.50, {8, 12, 1998}, 1); lista.push_back(aux);
    aux.insert(6, "Pedro", 70.25, {2, 2, 2012}, 1); lista.push_back(aux);
    aux.insert(7, "Luis", 58.75, {21, 9, 2015}, 0); lista.push_back(aux);
    aux.insert(8, "Maria", 48.75, {30, 4, 1997}, 1); lista.push_back(aux);
    aux.insert(9, "Isabel", 82.50, {17, 1, 2003}, 1); lista.push_back(aux);
    aux.insert(10, "Roberto", 77.25, {12, 6, 2011}, 1); lista.push_back(aux);
    aux.insert(11, "Lucia", 60.75, {9, 8, 2013}, 1); lista.push_back(aux);
    aux.insert(12, "Daniel", 0.00, {7, 7, 2008}, 0); lista.push_back(aux);
    aux.insert(13, "Marta", 73.50, {25, 5, 2004}, 1); lista.push_back(aux);
    aux.insert(14, "Hugo", 47.25, {14, 11, 1999}, 1); lista.push_back(aux);
    aux.insert(15, "Olga", 65.00, {3, 3, 2014}, 1); lista.push_back(aux);
    aux.insert(16, "Raul", 0.00, {19, 12, 2006}, 1); lista.push_back(aux);
    aux.insert(17, "Fernando", 42.50, {28, 2, 2001}, 1); lista.push_back(aux);
    aux.insert(18, "Laura", 84.25, {6, 9, 2018}, 0); lista.push_back(aux);
    aux.insert(19, "Juana", 49.00, {11, 4, 2007}, 1); lista.push_back(aux);
    aux.insert(20, "Roberto", 74.75, {23, 10, 2016}, 1); lista.push_back(aux);
    aux.insert(21, "Santiago", 48.00, {16, 5, 2010}, 1); lista.push_back(aux);
    aux.insert(22, "Valentina", 87.75, {14, 8, 2005}, 1); lista.push_back(aux);
    aux.insert(23, "Andres", 0.00, {28, 3, 2013}, 1); lista.push_back(aux);
    aux.insert(24, "Camila", 43.50, {9, 12, 2002}, 1); lista.push_back(aux);
    aux.insert(25, "Mateo", 79.50, {3, 7, 2015}, 0); lista.push_back(aux);
    aux.insert(26, "Lucas", 0.00, {22, 10, 2011}, 1); lista.push_back(aux);
    aux.insert(27, "Emma", 45.75, {18, 4, 2008}, 1); lista.push_back(aux);
    aux.insert(28, "Mariana", 71.00, {12, 1, 2017}, 1); lista.push_back(aux);
    aux.insert(29, "David", 50.75, {7, 6, 2000}, 1); lista.push_back(aux);
    aux.insert(30, "Renata", 92.00, {31, 8, 2009}, 1); lista.push_back(aux);
    aux.insert(31, "Tomas", 63.50, {25, 11, 2014}, 1); lista.push_back(aux);
    aux.insert(32, "Joaquin", 78.00, {19, 2, 2018}, 0); lista.push_back(aux);
    aux.insert(33, "Valeria", 66.25, {1, 1, 2003}, 1); lista.push_back(aux);
    aux.insert(34, "Samuel", 90.75, {8, 9, 2006}, 1); lista.push_back(aux);
    aux.insert(35, "Carolina", 0.00, {5, 7, 2004}, 1); lista.push_back(aux);

    /// Si esta linea se encuentra todavia, se restaran 10 puntos.

    /// A = Lista de estudiantes aprobados
    list <Estudiante> aprobados;
    for(it=lista.begin(); it != lista.end(); it++){
        aux = *it;
        if(aux.nota >= 51){
            aprobados.push_back(aux);
        }
    }
    /*
    for(it=aprobados.begin(); it != aprobados.end(); it++){
        aux = *it;
        aux.mostrar();
    }
    */
    /// B = Lista de estudiantes reprobados
    list <Estudiante> reprobados;
    for(it=lista.begin(); it != lista.end(); it++){
        aux = *it;
        if(aux.nota < 51 && aux.nota != 0){
            reprobados.push_back(aux);
        }
    }
    /*
    for(it=reprobados.begin(); it != reprobados.end(); it++){
        aux = *it;
        aux.mostrar();
    }
    */
    /// C = Lista de estudiantes mayores de edad
    /// Asume la fecha de examen como fecha actual -> 26/09/2023
    /// Aumenta la consideracion a m�s del a�o, para la edad
    Fecha actual{16, 9, 2023};
    list <Estudiante> mayores;
    for(it=lista.begin(); it != lista.end(); it++){
        aux = *it;
        if(actual.anio - aux.fecNac.anio >= 18){
            mayores.push_back(aux);
        }
    }
    /*
    for(it=mayores.begin(); it != mayores.end(); it++){
        aux = *it;
        aux.mostrar();
    }
    */
    /// D = Lista de estudiantes aprobados, de mas de 15 a�os y activos
    /// Aumenta la consideracion a m�s del a�o, para la edad
    list <Estudiante> aps;
    for(it=lista.begin(); it != lista.end(); it++){
        aux = *it;
        if(aux.nota >= 51 && actual.anio - aux.fecNac.anio > 15 && aux.estado == true){
            aps.push_back(aux);
        }
    }
    /*
    for(it=aps.begin(); it != aps.end(); it++){
        aux = *it;
        aux.mostrar();
    }
    */
    /// E = Lista de estudiantes que abandonaron
    list <Estudiante> abandonos;
    for(it=lista.begin(); it != lista.end(); it++){
        aux = *it;
        if(aux.nota == 0 || aux.estado == false){
            abandonos.push_back(aux);
        }
    }
    /*
    for(it=abandonos.begin(); it != abandonos.end(); it++){
        aux = *it;
        aux.mostrar();
    }
    */
    /// F = Reporte de estudiante cuya inicial es 'A'
    /*
    for(it=lista.begin(); it != lista.end(); it++){
        aux = *it;
        if(aux.nombre[0] == 'A'){
            aux.mostrar();
        }
    }
    */
    /// G = Reporte de estudiantes activos
    for(it=lista.begin(); it != lista.end(); it++){
        aux = *it;
        if(aux.estado == true){
            aux.mostrar();
        }
    }
    return 0;
}
