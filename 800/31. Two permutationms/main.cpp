// https://codeforces.com/problemset/problem/1761/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, n; cin >> n >> a >> b;
    if(n == a and n == b) cout << "YES\n";
    else {
        if(n - a - b > 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return;
}   

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}