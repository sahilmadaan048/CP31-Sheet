// https://codeforces.com/problemset/problem/1878/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, k, x; cin >> n >> k >> x;
    ll sum = 0;
    ll mini = (k * (k+1))/2; // first k sum
    ll maxi = (k * (2*n+1-k))/2; // last k sum
    if(x>=mini and x<=maxi) cout << "YES\n";
    else cout << "NO\n";
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}