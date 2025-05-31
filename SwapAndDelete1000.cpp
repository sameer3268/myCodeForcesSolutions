#include <iostream>
#include <string>
#include <algorithm> // For count()
using namespace std;

void solve() {
    string s;
    cin >> s;

    int n = s.length();
    int zeroes = count(s.begin(), s.end(), '0');
    int ones = count(s.begin(), s.end(), '1');

    int i;
    for (i = 0; i < n; i++) {
        if (s[i] == '0') {
            if (ones > 0)
                ones--;
            else
                break;
        } else { // s[i] == '1'
            if (zeroes > 0)
                zeroes--;
            else
                break;
        }
    }

    cout << n - i << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
