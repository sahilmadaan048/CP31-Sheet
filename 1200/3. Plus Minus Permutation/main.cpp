// https://codeforces.com/problemset/problem/1872/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll lcm(ll a, ll b) {
    return a / __gcd(a, b) * b;
}

ll range_sum(ll l, ll r) {
    if (l > r) return 0;
    return (l + r) * (r - l + 1) / 2;
}

void solve()
{	
    ll n, x, y;
    cin >> n >> x >> y;
    ll L = lcm(x, y);

    ll plus  = n / x - n / L;
    ll minus = n / y - n / L;

    ll ans = range_sum(n - plus + 1, n) - range_sum(1, minus);
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}   