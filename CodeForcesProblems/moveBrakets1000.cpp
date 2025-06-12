#include <iostream>
using namespace std;
#include <string>
#include <stack>

void solve(){
    int n;
    cin>>n;

    string n;
    cin>>s;

    stack<char> st;
    for(auto ch : s){
        if(ch = '('){
            st.push(ch);
        }
        else{
            if(!st.empty()) st.pop();
        }
    }
    cout<<st.size()<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}