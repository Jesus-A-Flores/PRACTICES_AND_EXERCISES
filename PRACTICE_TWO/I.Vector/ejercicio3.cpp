#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> vec;
    vector<vector<int>> vec1;
    vector<int> v;
    vector<vector<int>>::iterator it1;
    vector<int> :: iterator it2;
    //entrada para la matriz 1
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int num;
            cin>>num;
            v.push_back(num);
        }
        vec.push_back(v);
        v.clear();
    } 
    //entrada para la matriz 2 
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int num;
            cin>>num;
            v.push_back(num);
        }
        vec1.push_back(v);
        v.clear();
    }  
    //para la multiplicacion de matrices
    vector<vector<int>> res;  
                                                                                                                        
    for (it1 = vec.begin(); it1 != vec.end(); it1++){
        int c = 0;
        while (c < n){
            int f = 0; 
            int suma = 0;
            for(it2 = it1->begin(); it2 != it1->end();it2++){
                suma+=*it2 * vec1[f][c];
                f++;
            }
            c++;
            v.push_back(suma);
        }
        res.push_back(v);
        v.clear();
    }
    //muestra el resultado de la multiplicacion
    for(it1 = res.begin(); it1 != res.end(); it1++){
        for(it2 = it1->begin(); it2!=it1->end(); it2++){
            cout<<*it2<<" ";
        }
        cout<<endl;
    }
}