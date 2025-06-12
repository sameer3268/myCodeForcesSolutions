#include <iostream>
using namespace std;
#define ll long long 

void solve() {
    ll x,y,k;
    cin>>x>>y>>k;

    ll factor = x-1;

    ll needs = y*k - 1;
    ll stick_trades = needs/factor + (needs%factor != 0);
    ll coal_trades = k;

    ll sticks = 1 + stick_trades*factor - y*k;

    if(sticks > k){
        cout<<(stick_trades + coal_trades)<<endl;
    }else{
        needs = k - sticks;
        stick_trades += needs/factor + (needs%factor != 0);
        cout<<(stick_trades + coal_trades)<<endl;
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}