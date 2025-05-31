#include <iostream>
using namespace std;
#include <map>

void solve(){
     string s,t;
     cin>>s>>t;

     map<char,int> m1,m2;
     for(auto ch : s){
        m1[ch]++;
     }
     for(auto ch : t){
        m2[ch]++;
     }

     int i = 0,j = 0;
     while(i<s.size() && j < t.size()){
        if(s[i] == t[j]){
            if(m1[s[i]] < m2[t[j]]){
                break;
            }

            if(m1[s[i]] == m2[t[j]]){
                //match!
                 m2[t[j]]--;
                 j++;
               
            }
        }
        m1[s[i]]--;
        i++;
     }
     if(j == t.size()){
        cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }

}

int main(){
    int n=1;
    cin>>n;
    while(n--){
        solve();
    }
}