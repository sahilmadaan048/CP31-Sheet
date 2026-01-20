// https://codeforces.com/problemset/problem/1620/B

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int w, h;
    cin >> w >> h;
    int ans = 0;
 
    for (int i = 0; i < 4; i++)
    {
        int k;
        cin >> k; // number of points
        vector<int> a(k);
        for (int j = 0; j < k; j++)
            cin >> a[j];
        int diff = a.back() - a.front();
        if (i < 2)
            ans = max(ans, diff * h);
        else
            ans = max(ans, diff * w);
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