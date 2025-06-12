#include <iostream>
using namespace std;


void solve(){
    int n;
    cin>>n;

    string s;
    cin>>s;
    
    for(int i=1;i<n;i++){
        if(s[i] < s[i-1]){
            cout<<"Yes"<<endl;
            cout<<i<<" "<<i+1<<endl;
            return;
        }
    }
    cout<<"No"<<endl;

}

int main(){
    int t=1;

    while(t--){
        solve();
    }
}