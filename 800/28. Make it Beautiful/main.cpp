// https://codeforces.com/problemset/problem/1783/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    if(a[0] == a[n-1]) {
        cout << "NO\n";
        return;
    } else {
        cout << "YES\n";
        cout << a[n-1] << " ";
        for(int i=0; i<n-1; i++) cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}