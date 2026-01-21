
// https://codeforces.com/problemset/problem/1312/B

#include <bits/stdc++.h>
using namespace std;

void solve()
{	
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<int> ());

    for(auto ele: a) cout << ele << " ";

    cout << "\n";
    return;
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