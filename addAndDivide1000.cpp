#include <iostream>
#include <climits>  // For LLONG_MAX
#include <algorithm>  // For min()

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long ans = LLONG_MAX;
        // Try increasing b by 0 to 32
        for (int add = 0; add < 32; add++) {
            long long new_b = b + add;
            long long copy_a = a;
            long long ops = add;

            if (new_b == 1) continue;  // Cannot divide by 1

            // Count number of divisions
            while (copy_a > 0) {
                copy_a /= new_b;
                ops++;
            }

            ans = min(ans, ops);
        }

        cout << ans << endl;
    }
    return 0;
}
