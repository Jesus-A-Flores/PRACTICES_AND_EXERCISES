#include <iostream>
#include <list>

using namespace std;
list <int> fila;
int main(){
    int edad;
    char llegan;
    list <int> :: iterator it;
    do{
        cout<<"Edad de la persona: ";cin>>edad;
        if (fila.empty())
        {
            fila.push_front(edad);
        }else{
            if (edad >= 60){
                if (edad < fila.front()){
                    it = fila.begin();
                    int aux = *it;
                    it = fila.erase(it);
                    fila.push_front(edad);
                    fila.push_front(aux);
                }else{
                    fila.push_front(edad);
                }
            }else{
                fila.push_back(edad);
            }
        }
        cout<<"\n--------------------------------------"<<endl;
        for (it = fila.begin(); it != fila.end() ; it++)
        {
            cout<<*it<<" ";
        }
        cout<<"\n--------------------------------------"<<endl;
        cout<<"\nSiguen llegando? 'S' o 'N': "; cin>>llegan;    
    } while (toupper(llegan) != 'N');
    return 0;
}