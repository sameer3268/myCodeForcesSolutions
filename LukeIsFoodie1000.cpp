#include <iostream>
#include <vector>

using namespace std;

#define ll long long
#define vll vector<ll>

void solve()
{
    int n;
    ll x;
    cin >> n >> x;
    vll arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int changes = 0;
    vll prev = {arr[0] - x, arr[0] + x};
    for (int i = 1; i < n; i++)
    {
        vll curr = {arr[i] - x, arr[i] + x};
        vll overlap = {max(prev[0], curr[0]), min(prev[1], curr[1])};
        // if there is no overlap
        if (overlap[0] > overlap[1])
        {
            changes++;
            prev = curr;
        }
        else
        {
            prev = overlap;
        }
    }
    cout<<changes<<endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}