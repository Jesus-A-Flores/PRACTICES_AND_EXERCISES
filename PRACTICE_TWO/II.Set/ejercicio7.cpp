#include <iostream>
#include <set>
using namespace std;
int main(){
    string s;
    cin>>s;
    set<string> st;
    set<string> :: iterator it;
    int k = 0;
    do{
        for (int i = 0; i < s.length(); i++){
            string c;
            for (int j = k; j <= i; j++){
                c+=s[j];
            }
            st.insert(c);
        }
    }while(k++ < s.length());
    
    for(it = st.begin(); it!=st.end(); it++){
        cout<<*it<<endl;
    }
}