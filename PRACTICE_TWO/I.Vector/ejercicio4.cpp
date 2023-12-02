#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long t;
    string s;
    vector<pair<long long,string>> vec;
    vector<pair<long long,string>> :: iterator it;
    while (n--){
        cin>>t;
        getline(cin,s,'\n');
        vec.push_back(pair<long long,string>(t,s));
    }
    //muestra el reporte de los nombres
    sort(vec.begin(),vec.end());
    for(it = vec.begin(); it != vec.end(); it++){
        cout<<it->second<<" : "<<it->first<<endl;
    }
}