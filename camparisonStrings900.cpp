#include <iostream>
using namespace std;
#include <vector>
#define vi vector<char>


void solve(){
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int maxi = 1,cnt = 1;
        for(int i=0;i<n;i++){
            if(s[i] == s[i-1])
                cnt++;
            else 
                cnt = 1;
            maxi = max(maxi,cnt);
        }
        cout<<maxi+1<<endl;
    }
}

int main(){
    solve();
    return 0;
}