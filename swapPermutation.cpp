#include <iostream>
#include <vector>
#include <numeric> // For std::gcd
using namespace std;

#define vi vector<int>

void solve() {
    int n;
    cin >> n;

    vi arr(n + 1); // 1-based index
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int ans = 0; // GCD should start from 0
    for (int i = 1; i <= n; i++) {
        ans = gcd(ans, abs(arr[i] - i)); 
    }

    cout << ans << endl;
}

int main() {
 
    cout<<"Sameer"<<endl;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
