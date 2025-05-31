#include <iostream>
using namespace std;
#include <vector>
#define vi vector<int>

bool even(int n){
     if(n%2 == 0){
        return true;
     }
     else{
        return false;
     }
}

void solve(){
     int n,k;
     cin>>n>>k;

     vi arr(n);
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }

     int d = k-1;
     int e_cnt = 0;
     for(int i=0;i<n;i++){
        if(even(arr[i]))e_cnt++;

        if(arr[i]%k == 0)
           d=0;
        else
           d = min(d, k-arr[i]%k);
     }
     if(k!=4){
        cout<<d<<endl;
     }
     else
         {
            if(e_cnt >= 2){
                cout<<0<<endl;
            }
            else if(e_cnt == 1){
                cout<<min(d,1)<<endl;
            }
            else{
                cout<<min(2,d)<<endl;
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