#include <iostream>

using namespace std;
#define ll long long
void solve(){
     int n;
     cin>>n;
     
     int a=1;
     for(ll i=2;i*i<=n;i++){
        if(n%i == 0){
            a = n/i;
            break;
        }
     }
     cout<<a<<" "<<n-a<<endl;
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}