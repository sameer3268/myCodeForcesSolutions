#include <iostream>
#include <cmath>   // Needed for sqrt
#include <climits> // For LLONG_MAX
using namespace std;

// Function to check if a number is prime
bool is_prime(int num){
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++){
        if (num % i == 0) return false;  // You had num % 2 == 0
    }
    return true;
}

// Function to get the next prime >= x
int next_prime(int x){
    while (true){
        if (is_prime(x)){
            return x;
        }
        x++;
    }
}

void solve(){
    int d;
    cin >> d;

    int p = next_prime(d + 1);
    int q = next_prime(p + d);

    long long result = min(1LL * p * q, 1LL * p * p * p);  // Original p* was incomplete
    cout << result << endl;
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
