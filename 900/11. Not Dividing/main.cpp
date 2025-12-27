// https://codeforces.com/problemset/problem/1794/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    
    for(int i=0; i<n; i++) cin >> a[i];
    if(a[0] == 1) a[0]++;
    for(int i=1; i<n; i++) {
        if(a[i] == 1) {
            a[i]++;
            while(a[i]%a[i-1] == 0) {
                a[i]++;
            }
        }
        if(a[i]%a[i-1]==0) {
            a[i]++;
        }
    }
    for(auto ele: a) cout << ele << " ";
    cout << "\n";
    return;
}


int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}