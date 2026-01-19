// https://codeforces.com/problemset/problem/1715/B

#include <bits/stdc++.h>
using namespace std;

void solve()
{   

    long long n, k, b, s; cin >> n >> k >> b >> s;
    long long mini = b * k;
    // long long rem = s - mini;
    long long maxi = b * k + (n ) * (k-1);

    if(s < mini or s > maxi) {
        cout << -1 << "\n";
        return;
    }
    vector<long long> a(n, 0);
    a[0] = b * k;
    s -= b * k;

    for (int i = 0; i < n && s > 0; i++) {
        long long add = min(s, k - 1);
        a[i] += add;
        s -= add;
    }
    for(auto ele: a) cout << ele << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}