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
     }
     int ops = 0;
     for(int i=n-1;i>0;i--){
        if(arr[i] == 0){
            cout<<-1<<endl;
            return;
        }
        while( arr[i-1] > 0 && arr[i]<=arr[i-1]){
            arr[i-1] /= 2;
            ops++;
        }
     }
     cout<<ops<<endl;
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}