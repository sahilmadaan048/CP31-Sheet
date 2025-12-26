// https://codeforces.com/problemset/problem/1777/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    for(int i=0; i<n; i++) {
        cin >> a[i];
        a[i] %= 2;
    }

    int op = 0;
    int streak = 1;
    for(int i=0; i<n-1; i++) {
        if(a[i] == a[i+1]) {
            streak++;
        } else {
            op += streak - 1;
            streak = 1;
        }
    }
    op += streak - 1;
    cout << op << endl;
    // cout << endl;
    return;
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}