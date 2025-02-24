#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin >> n;
    if (n == 1) 
    {
        cout << 0 << '\n';
    } 
    else if (n == 2 || n == 3 || n == 4) 
    {
        cout << 1 << '\n';
    } 

    else {
        ll le = 1;
        ll ri = 1e9;
        ll ans = 0;
        while (le <= ri) 
        {
            ll mid = le + (ri - le) / 2LL;
            if (mid * mid >= n) {
                ans = mid;
                ri = mid - 1;
            } else {
                le = mid + 1;
            }
        }
        cout << ans - 1 << '\n'; 
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}