#include <iostream>
#include <queue>
using namespace std;
queue<int> cola;

int main(){
    int n;
    cout<<"Cantidad de datos que desea agregar a la cola: "; cin>>n;
    int num;
    cout<<"Ingrese los datos:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>num;
        cola.push(num);
    }
    cout<<"\nCOLA INICIAL"<<endl;
    queue <int> nuevaCola;
    while (!cola.empty()){
        cout<<cola.front()<<" ";
        if (nuevaCola.empty())
        {
            nuevaCola.push(cola.front());
        }else{
            if(cola.front() != nuevaCola.back()){
                nuevaCola.push(cola.front());
            }
        }
        cola.pop();
    }
    cout<<"\nNUEVA COLA"<<endl;
    while (!nuevaCola.empty())
    {
        cout<<nuevaCola.front()<<" ";
        nuevaCola.pop();
    } 
    return 0;
}