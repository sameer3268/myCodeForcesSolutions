#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>  // For accumulate()
using namespace std;

#define vi vector<int>
#define ll long long
#define all(x) x.begin(), x.end()

void solve() {
    int n;
    cin >> n;

    int mini = INT_MAX;
    vi min_2;

    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;

        vi arr(m);
        for (int j = 0; j < m; j++) cin >> arr[j];

        int min_el = *min_element(all(arr));
        mini = min(min_el, mini);

        if (arr.size() > 1) {
            arr.erase(find(all(arr), min_el));  // Erase only if array size > 1
            min_2.push_back(*min_element(all(arr)));
        }
    }

    ll beauty = mini + accumulate(all(min_2), 0LL) - *min_element(all(min_2));
    cout << beauty << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
