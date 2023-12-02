#include <iostream>
#include <math.h>
using namespace std;

int esDecimal(int n, int b){
    string tam = to_string(n);
    int suma = 0;
    int nnum;
    for (int i = 0; i < tam.size(); i++)
    {
        nnum = n%10;
        suma+=nnum*pow(b,i);
        n/=10;
    }
    return suma;
}
int main() {
    int num1, bas1, num2, bas2;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese la base del primer número: ";
    cin >> bas1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "Ingrese la base del segundo número: ";
    cin >> bas2;
    
    int decimal1 = esDecimal(num1,bas1);
    int decimal2 = esDecimal(num2,bas2);
    if (decimal1 == decimal2)
    {
        cout<<esDecimal(num1,bas1)<<endl;
    }else{
        if (decimal1 > decimal2){
            cout<<num1<<" "<<bas1<<endl;
        }
        if(decimal1 < decimal2){
            cout<<num2<<" "<<bas2<<endl;
        }
    }
    return 0;
}
