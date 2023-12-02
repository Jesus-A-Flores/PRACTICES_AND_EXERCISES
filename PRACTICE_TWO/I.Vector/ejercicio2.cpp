#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> vec(n,vector<int>(n));
    vector<vector<int>>::iterator it;
    vector<int>:: iterator it2;
    int num = 0;
    int fini = 0,ffin = n-1,cini = 0,cfin = n-1;
    //avanza los numeros del cuadrado
    for(int i = 0; i < n; i++){
        for(int j = cini; j <= cfin; j++){
            vec[fini][j] = ++num;
        }
        fini++;
        for(int j = fini; j <= ffin ; j++){
            vec[j][cfin] = ++num;
        }
        cfin--;
        for(int j = cfin; j>=cini; j--){
            vec[ffin][j] = ++num;
        }
        ffin--;
        for(int j = ffin; j>=fini; j--){
            vec[j][cini] = ++num;
        }
        cini++;
    }
    for(it=vec.begin();it!=vec.end(); it++){
        for(it2 = (*it).begin(); it2 != (*it).end();it2++){
            cout<<*it2<<" ";
        }
        cout<<endl;
    }
}