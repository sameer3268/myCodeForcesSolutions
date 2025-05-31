#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

#define vi vector<int>

void solve() {
    int n;
    cin >> n;

    vi A(n), B(n);
    set<int> elements;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
        elements.insert(A[i]);
    }

    for (int i = 0; i < n; i++) {
        cin >> B[i];
        elements.insert(B[i]);
    }

    map<int, int> mp1, mp2;
    
    int cnt = 1;
    mp1[A[0]] = 1;
    for (int i = 1; i < n; i++) {
        if (A[i] == A[i - 1])
            cnt++;
        else
            cnt = 1;
        mp1[A[i]] = max(mp1[A[i]], cnt);
    }

    cnt = 1;
    mp2[B[0]] = 1;
    for (int i = 1; i < n; i++) {
        if (B[i] == B[i - 1])
            cnt++;
        else
            cnt = 1;
        mp2[B[i]] = max(mp2[B[i]], cnt);
    }

    int ans = 1;
    for (auto e : elements) {
        ans = max(ans, mp1[e] + mp2[e]);
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
