#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n); 
        for (int i = 0; i < n; i++) {
            cin>>arr[i]; 
        }
        
        unordered_map<int,int> mp;
        bool yes = true;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
            
            if(mp.size()>2){
                yes = false;
                break;
            }
        }
        if(mp.size() == 2){
            int f1 = begin(mp)->second;
            if(f1!=n/2 && f1!=(n+1)/2)
            yes = false;
        }
        if(yes)cout<<"yes"<<endl;
        else cout<<"No"<<endl;
        

    }
}

int main() {
    solve();
    return 0;
}
