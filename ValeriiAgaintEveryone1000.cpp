#include <iostream>
#include <set>
using namespace std;
void solve(){
    int n;
    cin>>n;

    set<int> st;
    for(int i=0;i<n;i++){
            int val;
            cin>>val;
            st.insert(val);
        }
        if(st.size() == n)
            cout<<"NO"<<endl;
        else 
            cout<<"Yes"<<endl;
}


int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}