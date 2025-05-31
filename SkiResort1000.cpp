#include <iostream>
#include <vector>

using namespace std;

#define ll long long
#define vi vector<int>

void solve(){
      int n,k,q;
      cin>>n>>k>>q;

      vi arr(n);
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }

      ll ans = 0;
      ll cnt = 0;
      for(int i=0;i<n;i++){
        if(arr[i] <= q){
            cnt++;
        }else{
            if(cnt >= k){
                 ans += (cnt*1LL*(cnt+1))/2 -((k-1)*cnt - ((k-2)*(k-1))/2);
            }
            cnt = 0;
        }
      }
      if(cnt >= k){
        ans += (cnt*1LL*(cnt+1))/2 -((k-1)*cnt - ((k-2)*(k-1))/2);
      }
      cout<<ans<<endl;
}

int main(){
     int t=1;
     cin>>t;
     while(t--){
        solve();
     }
}