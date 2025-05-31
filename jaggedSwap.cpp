#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
         cin>>n;
        vector<int> arr(n);
       
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(arr[0] != 1)
          cout<<"No"<<endl;
        else
           cout<<"Yes"<<endl;
        
        
        
    }
}

int main(){
    solve();
    return 0;
}