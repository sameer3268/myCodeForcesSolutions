#include <iostream>
using namespace std;

void solve(){
    int t=1;
    cin>>t;
    while(t--){
        long long n,k,x;
        cin>>n>>k>>x;

        long long low = (k*(k+1))/2;
        long long high = (n*(n+1))/2 - ((n-k)*(n-k+1))/2;

        if(x>=low && x<=high){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}

int main(){
    solve();
    return 0;
}