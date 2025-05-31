#include <iostream>
using namespace std;
#include <vector>
#include <numeric>
#define vll vector<long long >
#define ll long long

bool odd(int sum){
    if(sum%2==0){
        return false;
    }
    else{
        return true;
    }
}
void solve(){
    int n,q;
    cin>>n>>q;

    vll arr(n+1);
    for(int i=1;i <= n;i++){
        cin>>arr[i];
    }
    vll psum(n+1);
    for(int i=1;i<=n;i++){
        psum[i] = psum[i-1] + arr[i];
    }
    while(q--){
        ll l,r,k;
        cin>>l>>r>>k;
        ll sum = psum[l-1] + psum[n] - psum[r] + k*(r-l+1);

        if(odd(sum)){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
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