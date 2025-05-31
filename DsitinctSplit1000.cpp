#include <iostream>
#include <string>
#include <map>
using namespace std;


void solve(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    map<char,int> left,right;
    for(auto ch: s){
        right[ch]++;
    }
    int score = 2;

    for(int i=0;i<n-1;i++){
        left[s[i]]++;
        if(right[s[i]] == 1){
            right.erase(s[i]);
        }
        else 
            right[s[i]]--;
        
        int candidate = left.size() + right.size();
        score = max(score,candidate);
    }
    cout<<score<<endl;
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
