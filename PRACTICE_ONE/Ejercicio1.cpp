#include <iostream>
using namespace std;

const int maximo = 5;
int pila[maximo];
int tope, base;
//inicio de pila
void inicia_pila(){
    base = 0;
    tope = base;
}
//verificando si la pila esta vacia
int pila_vacia(void){
    if(tope == base){
        return true; // verdadero = 1
    }else{
        return false; // falso = 0
    }
}

void push_pila(int dato, int &i){
    i=1;
    if(tope+1 == maximo){
        i=0;
    }else{
        tope++;
        pila[tope] = dato;
    }
}
void tope_pila(int &dato, int &i){
    i = true;
    if(pila_vacia()){
        i = false;
    }else{
        dato = pila[tope];
    }
}
void pop_pila(int &dato , int &i){
    i = true;
    if(pila_vacia()){
        i = false;
    }else{
        dato = pila[tope];
        tope--;
    }
}
int main(){
    int dato,i;
    inicia_pila();
    cout<<pila_vacia()<<endl; //llamando la funcion pila_vacia

    //agregando datos a la pila
    push_pila(5,i);
    push_pila(4,i);
    push_pila(7,i);
    push_pila(10,i);
    //llamando el ultimo dato de la pila
    tope_pila(dato,i);
    cout<<"Dato: "<<dato<<" ; Estado: "<<i<<endl;

   /* pop_pila(dato,i);
    pop_pila(dato,i);
    pop_pila(dato,i);
    pop_pila(dato,i); //mayor a datos ingresadis no se puede sacar
    cout<<dato<<" "<<i<<endl;*/
    cout<<"\t==quitando elementos de la pila=="<<endl;
    while(!pila_vacia()){ //entra al ciclo mientras la pila no este vacia
        pop_pila(dato,i);
        cout<<"Dato: "<<dato<<" ; Estado: "<<i<<endl;
    }
    return 0;
}
