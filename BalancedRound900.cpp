#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#define vi vector<int>

void solve(){
    int t = 1;
    cin>>t;
    while(t--){
        int n,k;
    cin>>n>>k;

    vi arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    
    int l = 1, cnt = 1;
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1] <= k)
            cnt++;
        else
            cnt = 1;

        l=max(cnt, l);
    }
    cout<<n-l<<endl;
    }
}

int main(){
    solve();
    return 0;
}