#include <iostream>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    
    if(odd(n)){
        cout<<-1<<endl;
    }
    else{
        n = n/2;
        if( n== 1){
            cout<<-1<<endl;
        else
            cout<<(n/3 + (n%3 != 0 ? 1: 0))<<" "<<n/2<<endl;
        }
    }
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}