#include <iostream>
using namespace std;
#define ull unsigned long long


void solve(){
     int t = 1;
     cin>>t;
     while(t--){
        ull n;
        cin>>n;

        ull ans;
        for(ull i=1; ;i++){
            if(n%i != 0){
                ans = i-1;
                break;
            }
        }
        cout<<ans<<endl;
     }
}

int main(){
    solve();
    return 0;
}