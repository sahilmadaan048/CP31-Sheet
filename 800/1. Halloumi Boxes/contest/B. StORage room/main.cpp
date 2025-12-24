// https://codeforces.com/contest/1903/problem/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<vector<int>> temp(n, vector<int>(n));

    vector<int> ans(n, (1<<30)-1);

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> temp[i][j];

            if(i != j) {
                ans[i] &= temp[i][j];
                ans[j] &= temp[i][j];
            }
        }
    }

    bool flag = true;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i != j and ((ans[i] | ans[j]) != temp[i][j])) {
                flag = false;
            }
        }
    }

    if(flag) {
        cout << "YES\n";
        for(auto ele: ans) cout << ele << " ";
        cout << "\n";
    } else {
        cout << "NO\n";
    }
    return;
}

int main()
{
    int t; cin >> t;
    while(t--) solve();
    return 0;
}