// https://codeforces.com/problemset/problem/1506/C

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a; cin >> a;
    string b; cin >> b;	
    int n = a.size();
    int m = b.size();

    int maxi = 0;
    for(int l=1; l<=min(n, m); l++) {
        for(int i=0; i + l<=n; i++) {
            for(int j=0; j + l<=m; j++) {
                if(a.substr(i, l) == b.substr(j, l)) {
                    maxi = max(maxi, l);
                }
            }
        }
    }

    cout << (n - maxi) + (m - maxi) << "\n";

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