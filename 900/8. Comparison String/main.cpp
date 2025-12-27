// https://codeforces.com/problemset/problem/1837/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n ;
    string s; cin >> s;
    int cnt = 1, maxi = 1;
    for(int i=0; i<n-1; i++) {
        if(s[i] == s[i+1]) {
            cnt++;
        } else {
            maxi = max(maxi, cnt);
            cnt = 1;
        }
    }
    maxi = max(maxi, cnt);
    cout << maxi + 1 << "\n";
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}