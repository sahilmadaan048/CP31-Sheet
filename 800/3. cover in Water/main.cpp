// https://codeforces.com/problemset/problem/1900/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; string s;
    cin >> n >> s;
    int cnt = 0;
    bool flag = false;
    for(int i=0; i<n; i++) {
        if(s[i] == '.') cnt++;
        if(i > 0 and i < n-1) {
            if(s[i-1] == '.' and s[i] == '.' and s[i+1] == '.') flag = true;
        }
    }
    if(flag) cout << 2 << "\n";
    else cout << cnt << "\n";
}

int main() {
    // your code here
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
