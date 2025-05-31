#include <iostream>

using namespace std;

#define ll long long

void solve() {
    ll n, k, b, s;
    cin >> n >> k >> b >> s;  // Read input values first

    if (s < k * b || s > (k * b + n * (k - 1))) {
        cout << "-1" << endl;
        return;
    }

    ll a1 = k * b;
    s -= k * b;

    if (s >= k - 1) {
        a1 += (k - 1);
        s -= (k - 1);
    } else {
        a1 += s;
        s = 0;
    }

    cout << a1 << " ";

    for (int i = 1; i < n; i++) {  // Fix: Loop should start from 1
        ll ai = min(s, k - 1);
        cout << ai << " ";
        s -= ai;
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
