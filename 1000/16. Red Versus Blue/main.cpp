
// https://codeforces.com/problemset/problem/1659/A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, r, b; cin >> n >> r >> b;
    // n = r + b
    // b < r
    int cnt = (r + b - 1 + 1) / (b + 1);
    // cout << "cnt: " << cnt << "\n";
    int regions = b + 1;

    int p = r / regions;      // minimum R's per region
    int q = r % regions;      // extra R's to distribute

    string ans = "";

    for(int i = 0; i < regions; i++) {
        int currR = p + (q > 0 ? 1 : 0);
        q = max(0, q - 1);

        ans += string(currR, 'R');   // add R's in this region

        if(i < b) ans += 'B';        // add B after region except last
    }

    cout << ans << "\n";
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