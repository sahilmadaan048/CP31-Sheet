// https://codeforces.com/problemset/problem/1679/A 

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin >> n;
    if(n%2 || n<4) {
        cout << -1 << "\n";
        return;
    }
    ll min, max;
    ll a = n/4;
    ll b = n/6;

    max = a;
    if(n%6 == 0) min = b;
    else {
        if(n%6==4) min = b+1;
        else if(n%6==2) min = ((n-4)/6)+2;
    }
    cout << min <<  " " << max << '\n';
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}