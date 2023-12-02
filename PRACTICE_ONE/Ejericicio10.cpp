#include <iostream>
#include <list>
#include <math.h>
#include <iomanip>
using namespace std;
list <int> ls1;
list <int> ls2;
list <int> :: iterator it1;
list <int> :: iterator it2;
int n,m,num;
void suma(void){
    cout<<"Dimension 1: ";cin>>n;
    cout<<"Datos de 1:";
    for (int i = 0; i < n; i++){
        cin>>num;
        ls1.push_back(num);
    }
    cout<<"Dimension 2: ";cin>>m;
    cout<<"Datos de 2:"<<endl;
    for (int i = 0; i < m; i++){
        cin>>num;
        ls2.push_back(num);
    }
    if (ls1.size() == ls2.size()){
        it1 = ls1.begin();
        it2 = ls2.begin();
        while (it1 != ls1.end()){
            cout<<*it1+*it2<<" ";
            it1++;
            it2++;
        }
        
    }else{
        cout<<"El tamanio de las listas deve de ser las mismas!"<<endl;
    }
    ls1.clear();
    ls2.clear();   
}
void resta(void){
    cout<<"Datos de la lista 1:";cin>>n;
    for (int i = 0; i < n; i++){
        cin>>num;
        ls1.push_back(num);
    }
    cout<<"Datos de la lista 2:";cin>>m;
    for (int i = 0; i < m; i++){
        cin>>num;
        ls2.push_back(num);
    }
    if (ls1.size() == ls2.size()){
        it1 = ls1.begin();
        it2 = ls2.begin();
        while (it1 != ls1.end()){
            cout<<*it1-*it2<<" ";
            it1++;
            it2++;
        }
        
    }else{
        cout<<"El tamanio de las listas deve de ser las mismas!"<<endl;
    }
    ls1.clear();
    ls2.clear();   
}
void multEscalar(void){
    cout<<"Datos de la lista: ";cin>>n;
    for (int i = 0; i < n; i++){
        cin>>num;
        ls1.push_back(num);
    }
    int esc;
    cout<<"Ingrese el escalar: "; cin>>esc;
    for (it1 = ls1.begin(); it1 != ls1.end(); it1++)
    {
        cout<<esc*(*it1)<<" ";
    }
    ls1.clear();
}
void prodEscalar(void){
    cout<<"Datos del vector 1:";cin>>n;
    for (int i = 0; i < n; i++){
        cin>>num;
        ls1.push_back(num);
    }
    cout<<"Datos del vector 2:";cin>>m;
    for (int i = 0; i < m; i++){
        cin>>num;
        ls2.push_back(num);
    }
    int prod = 0;
    if (ls1.size() == ls2.size()){
        it1 = ls1.begin();
        it2 = ls2.begin();
        while (it1 != ls1.end()){
            prod += (*it1)*(*it2);
            it1++;
            it2++;
        }
        cout<<prod<<endl;
    }else{
        cout<<"El tamanio de los vectores deve de ser las mismas!"<<endl;
    }
    ls1.clear();
    ls2.clear(); 
}
void prodVectorial(void){
    cout<<"Datos del vector 1:"<<endl;
    for (int i = 0; i < 3; i++){
        cin>>num;
        ls1.push_back(num);
    }
    cout<<"Datos del vector 2:"<<endl;
    for (int i = 0; i < 3; i++){
        cin>>num;
        ls2.push_back(num);
    }
    it1 = ls1.begin();
    it2 = ls2.begin();
    it1++;
    it2++;
    int x = ((*it1)*ls2.back()-ls1.back()*(*it2));
    int y = -(ls1.front()*ls2.back()-ls1.back()*ls2.front());
    int z = (ls1.front()*(*it2)-(*it1)*ls2.front());
    cout<<"RESULTADO"<<endl;
    cout<<x<<"i , "<<y<<"j , "<<z<<"k";
    ls1.clear();
    ls2.clear();
}
void normaVector(){
    int suma = 0;
    cout<<"Dimension del vector: ";cin>>n;
    cout<<"Datos del vector:"<<endl;
    for (int i = 0; i < n; i++){
        cin>>num;
        ls1.push_back(num);
    }
    for (it1 = ls1.begin(); it1 != ls1.end(); it1++)
    {
        suma += pow(*it1,2);
    }
    cout<<"La norma del vector es: "<<(float)sqrt(suma);
    ls1.clear();
}
void normalizarVector(){
    int suma = 0;
    
    cout<<"Dimension del vector: ";cin>>n;
    cout<<"Datos del vector:"<<endl;
    for (int i = 0; i < n; i++){
        cin>>num;
        ls1.push_back(num);
    }
    for (it1 = ls1.begin(); it1 != ls1.end(); it1++)
    {
        suma += pow(*it1,2);
    }
    cout<<"RESULTADO"<<endl;
    char vecu = 'i';
    for (it1 = ls1.begin(); it1 != ls1.end(); it1++)
    {
        cout<<(float)(*it1)/(sqrt(suma))<<vecu;
        if (n > 1){
            cout<<" + ";
        }
        n--;
        vecu++;
    }
    ls1.clear();
}
int main(){
    cout<<setprecision(2);
    int opc;
    do{
        cout<<"\n----------------------------------------------------------------"<<endl;
        cout<<"\t\t==OPCIONES DEL PROGRAMA=="<<endl;
        cout<<"\t1. Suma de 2 vectores\n\t2. Resta de 2 vectores"<<endl;
        cout<<"\t3. Multiplicacion de vector por escalar\n\t4. Producto escalar de 2 vectores"<<endl;
        cout<<"\t5. Producto vectorial de 2 vectores\n\t6. Norma de un vector"<<endl;
        cout<<"\t7. Normalizar un vector\n\t8. Salir"<<endl;
        cout<<"Opcion: "; cin>>opc;
        switch (opc)
        {
        case 1:
            suma();
            break;
        case 2:
            resta();
            break;
        case 3:
            multEscalar();
            break;
        case 4:
            prodEscalar();
            break;
        case 5:
            prodVectorial();
            break;
        case 6:
            normaVector();
            break;
        case 7:
            normalizarVector();
            break;
        default:
            cout<<"Opcion incorrecta!"<<endl;
            break;
        }
    } while (opc != 8);
    
    return 0;
}