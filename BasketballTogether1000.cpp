#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define vll vector<ll>

void solve(){
     int n,d;
     cin>>n>>d;

     vll arr(n);
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     sort(arr.begin(),arr.end());
     int wins = 0;
     int i = -1,j=n-1;
     ll curr = arr[j];
     while(i < j){
        //find the maximum power
        ll maxp = arr[j];

        if(curr<=d){
            i++;
            curr += maxp;
        }
        else{
            wins++;
            j--;
           if(j>=0){
            curr = arr[j];
           }
        }
     }
     cout<<wins<<endl;
 
}

int main(){
    solve();
    return 0;
}