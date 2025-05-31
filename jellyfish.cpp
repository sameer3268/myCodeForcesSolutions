#include <iostream>
using namespace std;
#include <vector>
#define vi vector<int>


void solve(){
     int t=1;
     cin>>t;
     while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        vi arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long total = b;

        for(auto x:arr){
            total += min(x,a-1);
        }
        cout<<total<<endl;
     }
}

int main(){
    solve();
    return 0;
}