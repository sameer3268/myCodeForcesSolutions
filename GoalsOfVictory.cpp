#include <iostream>
#include <vector>
using namespace std;

void solve(){
     int t;
     cin>>t;
      
     while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
        }
        int ans = 0;
        int FinalAns;
        for(int i=0;i<n-1;i++){
            ans += arr[i];
        }
        FinalAns = -ans;
         cout<<FinalAns<<endl;
     }
    
}

int main(){
    solve();
    return 0;
}