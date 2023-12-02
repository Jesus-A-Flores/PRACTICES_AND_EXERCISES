#include <iostream>
#include <list>

using namespace std;
list <int> lista;
const int mult = 7; //define el multiplo como costante
int multiploMasCercano(int numero) {
    int cociente = numero / mult;
    int residuo = numero % mult;
    int multiploAnterior = cociente * mult;
    int multiploSiguiente = (cociente + 1) * mult;

    if (abs(numero - multiploAnterior) < abs(numero - multiploSiguiente)) {
        return multiploAnterior;
    } else {
        return multiploSiguiente;
    }
}

int main(){
    list <int> nuevaLista;
    int n;
    cout<<"Cantidad de datos que desea agregar a la cola: "; cin>>n;
    int num;
    cout<<"Ingrese los datos:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>num;
        lista.push_front(num);
    }
    list <int> :: iterator it;
    for (it = lista.begin(); it != lista.end(); it++)
    {
        nuevaLista.push_front(multiploMasCercano(*it));
    }
    cout<<"\nSE MUESTRA LA NUEVA LISTA CON EL MULTIPLO MAS CERCANO"<<endl;
    for (it = nuevaLista.begin(); it != nuevaLista.end(); it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}