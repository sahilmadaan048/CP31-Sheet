// https://codeforces.com/problemset/problem/1829/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    int cnt = 0;
    int maxi = 0;
    for(int i=0; i<n; i++) {
        if(a[i] == 0) {
            cnt++;
        }
        else {
            maxi = max(maxi, cnt);
            cnt = 0;
        }
    }
    maxi = max(maxi, cnt);
    cout << maxi << "\n";
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}