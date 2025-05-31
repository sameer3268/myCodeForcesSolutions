#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        int n, k;
        cin >> n >> k; // Read the size of the array and the threshold

        vector<int> arr(n);
        bool found = false;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];

            if(arr[i] == k)
            found = true;
        }
      
        if(found){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}

int main() {
    solve();
    return 0;
}
