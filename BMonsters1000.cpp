#include <iostream>
#include <vector>
#include <algorithm> // Required for sort()
using namespace std;

#define vi vector<int>
#define all(x) x.begin(), x.end()

void solve() {
    int n, k;
    cin >> n >> k;

    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<pair<int, int>> hp_idx;  // Fix: Use pair<int, int>

    for (int i = 0; i < n; i++) {
        if (arr[i] % k == 0) {
            hp_idx.push_back({k, -i});
        } else {
            hp_idx.push_back({arr[i] % k, -i});
        }
    }

    // Sorting in descending order of remainder, if same remainder, smaller index first
    sort(hp_idx.rbegin(), hp_idx.rend());

    for (int i = 0; i < n; i++) {
        cout << -hp_idx[i].second + 1 << " ";  // Fix output indexing
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
