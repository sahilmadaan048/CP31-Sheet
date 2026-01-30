// https://codeforces.com/problemset/problem/1848/B

#include <bits/stdc++.h>
using namespace std;

void solve()
{   
    int n, k; cin >> n >> k;
    vector<int> c(n);

    for(int i=0; i<n; i++) {
        cin >> c[i];
    }
    cout << *max_element(c.begin() , c.end());
    cout << "\n";
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