// https://codeforces.com/problemset/problem/1875/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, n; cin >> a >> b >> n;
    vector<int> temp(n);

    int ans = b;
    for(int i=0; i<n; i++) {
        cin >> temp[i];
        ans += min(a-1, temp[i]);
    }
    cout << ans << "\n";
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}