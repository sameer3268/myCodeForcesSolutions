#include <iostream>
#include <string>
using namespace std;

#define ull unsigned long long

// Check if a number is fair
bool is_fair(ull n) {
    string x = to_string(n);
    for (char c : x) {
        int digit = c - '0';
        if (digit != 0 && n % digit != 0)
            return false;
    }
    return true;
}

void solve() {
    ull n;
    cin >> n;

    while (!is_fair(n)) {
        n++;
    }
    cout << n << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
