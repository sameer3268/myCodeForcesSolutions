#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define vi vector<int>

void solve(){
    int n;
    cin>>n;

    vi arr(n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }

    int freq = 0;
    for(auto it:mp){
        freq = max(freq,it.second);
    }

    int ops=0;
    while(freq<n){
        ops++;
    if(n-freq >= freq){
        ops += freq;
        freq *= 2;
    }
    else{
        ops += n-freq;
        freq = n;
    }
  }
  cout<<ops<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}