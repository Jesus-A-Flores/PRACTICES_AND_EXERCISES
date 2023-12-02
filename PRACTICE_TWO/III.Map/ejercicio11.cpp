#include <iostream>
#include <map>


using namespace std;
int main(){
    int t,n;
    cin>>t;
    map<pair<float,float>,int> mpv;
    map<pair<float,float>,int> ::iterator it;
    map<int,int> mp;
    map<int,int> ::iterator itm;
    float a,b,c;
    while (t--){
        cin>>a>>b>>c;
        mpv[pair<float,float>(a,b)] = c;
    }
    int p,q;
    cin>>n;
    while (n--){
        cin>>p>>q;
        if(mp.find(p) == mp.end()){
            mp[p] = q;
        }else{
            mp[p] = mp[p]+q; 
        }
    }
    //para el total de ventas del producto
    int suma = 0;
    for(it = mpv.begin(); it!=mpv.end(); it++){
        if(mp.find((it->first).first) != mp.end()){
            suma += (it->first).second * mp[(it->first).first];
        }
    }
    cout<<suma<<endl;
    //reporte con la cantidad final del producto
    for(it = mpv.begin(); it!=mpv.end(); it++){
        if(mp.find((it->first).first) != mp.end()){
            mp[(it->first).first] = it->second - mp[(it->first).first];
        }
    }
    //se muestra el reporte realizado
    for (itm = mp.begin(); itm != mp.end(); itm++){
        cout<<itm->first<<" : "<<itm->second<<endl;
    }
    
}