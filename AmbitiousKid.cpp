#include <iostream>
using namespace std;
#include <climits>
#include <vector>
#define vi vector<int>

void solve(){
    
    int t =1;
    while(t--){
        int n;
     cin>>n;
     vi arr(n);
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
      int mini = INT_MAX;
     for(int i=0;i<n;i++){
        if(arr[i] == 0){
            mini = 0;
            break;
        }
        mini = min(mini,abs(arr[i]));
     }
     cout<<mini<<endl;
    }
}

int main(){
    solve();
    return 0;
}





//  int n;
//      cin>>n;
//      vii arr(n);
//      for(int i=0;i<n;i++){
//         cin>>arr[i];
//      }
//       int mini = 0;
//      for(int i=0;i<n;i++){
//          int mini = INT_MAX;
//         if(arr[i] == 0){
//             break;
//         }
//         mini = min(mini,abs(arr[i]));
//      }
//      cout<<mini<<endl;



//       while(t--){
//         int n;
//         cin>>n;

//         vi arr(n);
//         for(int i=0;i<n;i++)
//         cin>>arr[i];

//         int ops = 1e9;
//         for(int i=0;i<n;i++){
//             ops = min(ops,abs(arr[i]-0));
//         }
//         cout<<ops<<endl;
//     }