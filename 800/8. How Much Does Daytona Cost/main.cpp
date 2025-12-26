// https://codeforces.com/problemset/problem/1878/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);

    bool flag = false;
    for(int i=0; i<n; i++) {
        cin >> a[i];
        if(a[i] == k) {
            flag = true;
        }
    }

    if(flag) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}