#include <iostream>
#include <set>

using namespace std;
int main(){
    int m,n;
    cin>>n>>m;
    set <int> a;  
    set <int> b; 
    set <int> res;
    set <int> :: iterator it; 
    int u,v;
    while (n--){
        cin>>u;
        a.insert(u);
    }
    while (m--){
        cin>>v;
        b.insert(v);
    }
    //para la union
    res = a;
    for(it = b.begin(); it != b.end(); it++){
        res.insert(*it);
    }
    if(res.empty()){
        cout<<"NN";
    }else{
        for(it = res.begin(); it != res.end(); it++){
            cout<<*it<<" ";
        }
    }
    //para la interseccion
    cout<<endl;
    res.clear();
    for(it = b.begin(); it != b.end(); it++){
        if(a.find(*it) != a.end()){
            res.insert(*it);
        }
    }
    if(res.empty()){
        cout<<"NN";
    }else{
        for(it = res.begin(); it != res.end(); it++){
            cout<<*it<<" ";
        }
    }
    //para la diferencia de A - B
    cout<<endl;
    set<int> d1;
    d1 = a;
    for(it = b.begin(); it != b.end(); it++){
        if(d1.find(*it) != d1.end()){
            d1.erase(*it);
        }
    }
    if(d1.empty()){
        cout<<"NN";
    }else{
        for(it = d1.begin(); it != d1.end(); it++){
            cout<<*it<<" ";
        }
    }
    //para la diferencia de A - B
    cout<<endl;
    set<int> d2;
    d2 = b;
    for(it = a.begin(); it != a.end(); it++){
        if(d2.find(*it) != d2.end()){
            d2.erase(*it);
        }
    }
    if(d2.empty()){
        cout<<"NN";
    }else{
        for(it = d2.begin(); it != d2.end(); it++){
            cout<<*it<<" ";
        }
    }
    cout<<endl;
    //para la diferencia simetrica
    res = d1;
    for(it = d2.begin(); it != d2.end(); it++){
        res.insert(*it);
    }
    if(res.empty()){
        cout<<"NN";
    }else{
        for(it = res.begin(); it != res.end(); it++){
            cout<<*it<<" ";
        }
    }
}