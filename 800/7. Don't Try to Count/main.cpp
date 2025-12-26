// https://codeforces.com/problemset/problem/1881/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    string x, s; cin >> x >> s;
    int i;
    for(i=0; i<6; i++) {
        if(x.find(s) != -1) {
            cout << i << "\n";
            break;
        }
        x += x;
    }
    if(i == 6) {
        cout << -1 << "\n";
    }
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}
