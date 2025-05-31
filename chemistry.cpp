#include <iostream>
using namespace std;
#include <vector>
#include <map>
#define vi vector<int>

bool odd(int freq){
    if(freq%2 == 0){
        return false;
    }
    else{
        return true;
    }
}
void solve(){
    int t = 1;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        map<char,int> mp;
        for(auto ch : s){
            mp[ch]++;
        }

        int odds = 0;
         for(auto it: mp){
         int freq = it.second;
              if(odd(freq))
                  odds++; 
            }
        if(k<odds-1) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}

int main(){
    solve();
    return 0;
}