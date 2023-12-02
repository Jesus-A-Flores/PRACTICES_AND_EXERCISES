#include <iostream>
#include <list>
using namespace std;
list <char> ls;
list <char> ls2;
int main(){
    string cadena;
    getline(cin,cadena);
    char c;
    for (int i = 0; i < cadena.length(); i++)
    {
        c = cadena.at(i);  
        ls.push_back(c); 
    }
    ls.sort();//ORDENA
    list <char> ::iterator it;
    for (it = ls.begin(); it != ls.end(); it++)
    {   
        if (*it != ' ')
        {
            cout<<*it;
        }
        
    }
    return 0;
}