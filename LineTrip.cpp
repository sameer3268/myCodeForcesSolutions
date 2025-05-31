#include <iostream>
#include <vector>
#include <climits>
using namespace std;
#define vi vector<int>


void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        vi arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int last = 0;
        int ans = INT_MIN;
        for (int i = 0; i < n; i++) {
            ans = max(ans, arr[i] - last);
            last = arr[i];
        }
        ans = max(ans, 2 * (x - last));
        cout << ans << endl;
    }
}

int main() {
    solve(); 
    return 0; 
}
