// https://codeforces.com/problemset/problem/1828/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> p(n);
    for(int i=0; i<n; i++) {
        cin >> p[i];
    }
    int ans = 0;
    int x ;
    for(int i=0; i<n; i++) {
        if(p[i] == i+1) continue;
        x = abs(p[i] - (i+1));
        ans = gcd(ans, x);
    }
    cout << ans << "\n";
    return;
}

int main() {
    int t; cin >> t; 
    while(t--) {
        solve();
    }
}




