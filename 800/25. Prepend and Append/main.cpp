// https://codeforces.com/problemset/problem/1791/C

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int l=0, r=n-1, ans=n;
    while(s[l] != s[r] and ans > 0) {
        l++;
        r--;
        ans -= 2;
    }
    cout << ans << '\n';
    return;
}

int main() {
    int t; cin >> t;

    while(t--) {
        solve();
    }
}
