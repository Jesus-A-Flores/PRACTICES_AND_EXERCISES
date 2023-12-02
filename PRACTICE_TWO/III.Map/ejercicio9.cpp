#include <iostream>
#include <map>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    int q;
    map<int,string> mp;
    map<int,string> :: iterator it;
    while (t--){
        cin>>q;
        if(mp.empty()){
            mp.insert(make_pair(q,"OK"));
            cout<<"Ok"<<endl;
        }else{
            bool band = false;
            for(it = mp.begin(); it!=mp.end() && !band; it++){
                if(it->first == q){
                    cout<<"NO"<<endl;
                    band = true;
                }
            }
            if(!band){
                mp.insert(make_pair(q,"OK"));
                cout<<"Ok"<<endl;
            }
        }
    }
    
}