#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<char>::iterator itc;

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
    vector<char>vec;
    for (int i = 0; i < s.length(); i++){
        if(!isVocalM(s[i])){
            vec.push_back(s[i]);
        }
    }
    sort(vec.begin(),vec.end());
    vec.erase(unique(vec.begin(),vec.end()),vec.end());
    vector<char>::iterator it2;
    for(itc = vec.begin(); itc!=vec.end();itc++){
        cout<<*itc<<" : ";
        int cont = 0;
        for (int i = 0; i < s.length(); i++){
            if (*itc == s[i]){
                cont++;
            }
        }
        cout<<cont<<endl;
    }
}