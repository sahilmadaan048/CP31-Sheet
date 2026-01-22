// https://codeforces.com/problemset/problem/1914/C

#include <bits/stdc++.h>
using namespace std;

void solve()
{	
    int  n, k; cin >> n >> k;
    vector<long long> a(n), b(n);

    for(int i=0; i<n; i++) cin >> a[i];    
    for(int i=0; i<n; i++) cin >> b[i];    

    long long ans = 0, sum = 0, mx = 0;

    for(int i=0; i<min(n, k); i++) {
        sum += a[i];
        mx = max(mx, b[i]);
        ans = max(ans, sum + mx * (k - i - 1));
    } 
    
    cout << ans << "\n";
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}   