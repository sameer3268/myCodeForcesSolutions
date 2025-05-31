#include <iostream>
#include <string>
using namespace std;


void solve(){
    int n,r,b;
    cin>>n>>r>>b;
    
    string ans;
    int nreds = r/(b+1);
    int rem = r%(b+1);
    
    for(int i=0;i<b;i++){
        for(int j=0;j<nreds;j++)
           ans.push_back('R');
        if(rem){
            ans.push_back('R');
            rem--;
        }
        ans.push_back('B');
    
    }
    for(int i=0;i<nreds;i++){
        ans.push_back('R');
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