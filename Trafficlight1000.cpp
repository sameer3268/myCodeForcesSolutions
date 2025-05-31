#include <iostream>
#include <string>
#include <climits> // For INT_MIN

using namespace std;

void solve() {
    int n;
    char c;
    cin >> n >> c;

    string s;
    cin >> s;

    s += s; // Duplicate the string to simulate circular behavior

    int ans = -1; 
    int last_g = -1; // Last position of 'g'

    for (int i = s.length() - 1; i >= 0; i--) { 
        if (s[i] == 'g') { 
            last_g = i;
        }
        if (s[i] == c && last_g != -1) { 
            ans = max(ans, last_g - i);
        }
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
