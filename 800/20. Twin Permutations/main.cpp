// https://codeforces.com/problemset/problem/1831/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i=0; i<n; i++) cin >> a[i];

    for(auto ele: a) {
        cout << n + 1 - ele << " ";
    }
    cout << '\n';
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}