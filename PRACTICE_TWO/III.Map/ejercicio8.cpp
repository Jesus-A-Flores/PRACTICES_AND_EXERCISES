#include <iostream> 
#include <map>
using namespace std;
bool isVocalM(char c){
    string v = "aeiou";
    for (int i = 0; i < 5; i++){
        if(c == v[i]){
            return true;
        }
    }
    return false;
}
int main(){
    string s;
    getline(cin,s);
    map<char,int> mp;
    map<char,int> :: iterator it;
    
    for (int i = 0; i < s.length(); i++){
        if(!isVocalM(s[i])){
            mp[s[i]]++;
            //mp.insert(make_pair(s[i],));
        }
        /*for(it = mp.begin(); it != mp.end(); it++){
            if(it->first == s[i]){
                it->second++;
            }
        }*/
    }
    for(it = mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<" : "<<it->second<<endl;
    }
}