// https://codeforces.com/problemset/problem/1857/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;

    int sz = n * (n - 1) / 2;
    vector<long long> b(sz);

    for (int i = 0; i < sz; i++) {
        cin >> b[i];
    }

    sort(b.begin(), b.end());

    vector<long long> a;
    int idx = 0;

    for (int cnt = n - 1; cnt >= 1; cnt--) {
        a.push_back(b[idx]);
        idx += cnt;
    }

    // last element doesn't appear in b
    a.push_back(1e9);

    for (auto x : a) {
        cout << x << " ";
    }
    cout << "\n";
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