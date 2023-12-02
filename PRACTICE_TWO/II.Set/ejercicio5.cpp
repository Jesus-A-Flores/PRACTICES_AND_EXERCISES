#include <iostream>
#include <set>
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
    set<char> st;
    set<char>::iterator it;
    for (int i = 0; i < s.length(); i++){
        if(!isVocalM(s[i])){
            st.insert(s[i]);
        }
    }
    for (it = st.begin(); it != st.end(); it++){
        cout<<*it<<" : ";
        int cont = 0;
        for (int i = 0; i < s.length(); i++){
            if(*it == s[i]){
                cont++;
            }
        }
        cout<<cont<<endl;
    }
    
}