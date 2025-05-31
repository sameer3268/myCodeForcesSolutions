#include <iostream>
using namespace std;
#include <vector>
#define vi vector<int>

void solve(){
    int n;
    cin>>n;

    vi arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i] == 1)
            arr[i]++;
    }
    for(int i=1;i<n;i++){
        if(arr[i]%arr[i-1] == 0)
          arr[i]++;
    }
    for(auto a: arr){
        cout<<a<<" ";
    }
    cout<<endl;
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}