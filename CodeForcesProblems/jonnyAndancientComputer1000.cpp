#include <iostream>
using namespace std;
#define ll long long

void solve(){
    ll a,b;
    cin>>a>>b;

    ll cnt1 = 0,cnt2 = 0;
    while(a%2 == 0){
        a/=2;
        cnt1++;
    }
    while(b%2 == 0){
        b/=2;
        cnt2++;
    }
    if(a != b) cout<<-1<<endl;
    else{
        if(cnt1 == cnt2) cout<<0<<endl;
        else{
            ll dif = abs(cnt2-cnt1);
            cout<<dif/3 + (dif%3 != 0)<<endl;
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