#include <iostream>
#include <map>

using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    map<int,int> a;
    map<int,int> b;
    map<int,int> res;
    map<int,int> :: iterator it;
    int u,p;
    int v,q;
    while (n--){
        cin>>u>>p;
        a[u] = p;
    }
    while (m--){
        cin>>v>>q;
        b[v] = q;
    }
    res = a;
    for(it = b.begin(); it != b.end(); it++){
        if(res.find(it->first) == res.end()){
            res.insert(*it);
        }else{
            res[it->first] = res[it->first] + it->second;
        }
    }
    for(it = res.begin();it != res.end(); it++){
        cout<<"("<<it->first<<","<<it->second<<")\n";
    }
}