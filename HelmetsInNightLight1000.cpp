#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define vi vector<int>
#define ll long long

void solve() {
    int n, p;
    cin >> n >> p;

    vi A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    vi B(n);
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    vector<pair<ll, ll>> cost_cap;
    cost_cap.push_back({p, n + 1}); // Initial cost and capacity

    for (int i = 0; i < n; i++) {
        cost_cap.push_back(make_pair(B[i], A[i]));
    }

    sort(cost_cap.begin(), cost_cap.end());

    int total = 1;
    ll cost = p;
    int idx = 0;

    while (total < n) {
        int left = n - total;

        if (cost_cap[idx].second <= left) {
            total += cost_cap[idx].second;
            cost += cost_cap[idx].first * 1LL * cost_cap[idx].second;
        } else {
            total = n;
            cost += left * 1LL * cost_cap[idx].first;
        }
        idx++;
    }

    cout << cost << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
