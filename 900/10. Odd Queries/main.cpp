// https://codeforces.com/problemset/problem/1807/D


#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q; cin >> n >> q;
    vector<int> a(n), pre;
    pre.push_back(0);
    for(int i=0; i<n; i++) {
        cin >> a[i];
        pre.push_back(pre[i]+a[i]);
    }
    while(q--) {
        int l, r, k; cin >> l >> r >> k;
        int left = pre[l-1];
        int right = pre.back() - pre[r];
        int len = r-l+1;
        int z = k*len;
        int sum = left+right+z;
        cout << ((sum%2) ? "YES\n" : "NO\n");
    }
}
int main() {
    int t; cin >> t; 
    while(t--) {
        solve();
    }
}