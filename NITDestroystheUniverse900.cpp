#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int> 

void solve() {
    int n;
    cin >> n;
    int count = 0, NumCount = 0;
    vi arr(n+1);

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    int l=-1,r=-1;
    for(int i=1;i<=n;i++){
        if(arr[i] != 0){
            if(l==-1 && r==-1){
                l=r=i;
            }
            else{
                r = i;
            }
        }
    }
    if(l==-1 && r==-1){
        cout<<0<<endl;
    }
    else{
        for(int i = l;i<=r;i++){
            if(arr[i] == 0){
                cout<<2<<endl;
                return;
            }
        }
        cout<<1<<endl;
    }
   
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
