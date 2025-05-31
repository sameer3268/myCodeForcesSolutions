#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define vi vector<int>

void solve(){
    int n;
    cin>>n;
    vi shoe_sz(n);
    for(int i=0;i<n;i++){
        cin>>shoe_sz[i];
    }
    vi shuffling(n);
    for(int i=0;i<n;i++){
        shuffling[i] = i+1;
    }

    int i = 0;
    while(i<n){
        int cur_sz = shoe_sz[i];

        int start = i;
        int end = i;
        while(end < n && shoe_sz[end] == cur_sz) end++;

        if(start == end - 1){
            cout<<"-1"<<endl;
            return;
        }

        rotate(shuffling.begin()+start, shuffling.begin()+start+1,shuffling.begin()+end);
        i = end;

    }
    for(auto s : shuffling) cout<<s<<" ";
}

int main(){
    int t = 1;
    cin>>t;
    while(t--){

        solve();
    }
    return 0;
}