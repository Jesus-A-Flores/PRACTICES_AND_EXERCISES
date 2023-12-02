#include <iostream>
#include <stack>
#include <queue>
//NECES(FE(S R)O(TAM)I)UER(OZ)S
using namespace std;
stack <char> pila;
queue <char> cola;
stack <char> auxp;
int main(){
    string cadena;
    getline(cin,cadena);
    char c;
    bool band = false;
    for (int i = 0; i < cadena.length(); i++)
    {
        c=cadena.at(i);
        if (c != '(' && !band && c != ')'){
            cola.push(c);
        }else{
            if (c != ')'){
                pila.push(c);
                band = true;
            }else{
                while (!pila.empty() && pila.top() != '(')
                {
                    cola.push(pila.top());
                    pila.pop();
                }
                pila.pop();
                band = false;
            } 
        } 
    }
    while (!pila.empty())
    {
        cout<<pila.top();
        pila.pop();
    }
    cout<<endl;
    //Muestra el contenido de la cola
    while (!cola.empty())
    {
        cout<<cola.front();
        cola.pop();
    }
    
    return 0;
}