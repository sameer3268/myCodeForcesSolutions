#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define vll vector<long long>

void solve() {
    ll w, h;
    cin >> w >> h;

    ll max_area = 0;
    for (int i = 0; i < 4; i++) {
        int k;
        cin >> k;

        for(int j=0;i<k;j++)
        {
            ll x;
            cin>> x;
            if(j==0){
                first = x;
            }
            if(j == k-1) {
                last = x;
            }
        }

        if (k == 0) continue; // safety

        ll base = last - first;
        ll height = (i < 2) ? h : w;

        max_area = max(max_area, base * height);
    }

    cout << max_area << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
