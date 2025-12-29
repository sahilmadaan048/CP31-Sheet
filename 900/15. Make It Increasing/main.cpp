// https://codeforces.com/problemset/problem/1675/B

/*
in a operation -  wr can divide any elemnt by 2
minimum no of ops to make the array strictly increasin


*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) {
        cin >> a[i];
    }

    ll count = 0;

    for(ll i=n-1; i>0; i--) {
        if(a[i] <= a[i-1]) {
            if(a[i] == 0) {
                count = -1;
                break;
            }
            while(a[i-1] >= a[i]) {
                a[i-1] /= 2;
                count++;
            }
        }
    }
    cout << count << "\n";
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}