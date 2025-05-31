#include <iostream>
using namespace std;
#include <vector>
#define vi vector<int>

void solve(){
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vi arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        vi ans;
        ans.push_back(arr[0]);
        for(int i=1;i<n;i++){
               if(arr[i] >= arr[i-1]){
                ans.push_back(arr[i]);
               }
               else{
                ans.push_back(arr[i]);
                ans.push_back(arr[i]);
               }
        }
        cout<<ans.size()<<endl;
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

int main(){
    solve();
    return 0;
}