#include <iostream>
using namespace std;
#include <vector>
#include <numeric>
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
  
  
     int n;
    cin>>n;
    vi arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
  
     if(even(n)){
        cout<<2<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<n<<endl;
    }
    else{
        cout<<4<<endl;
        cout<<1<<" "<<n-1<<endl;
        cout<<1<<" "<<n-1<<endl;
        cout<<n-1<<n<<endl;
        cout<<n-1<<n<<endl;
    }
   
   
  } 
 




int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}