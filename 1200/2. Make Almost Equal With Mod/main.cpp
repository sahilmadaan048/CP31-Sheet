// https://codeforces.com/problemset/problem/1909/B

#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

void solve()
{   
    int n; cin >> n;
    vector<int> a(n);

    int cnt1 = 0, cnt2 = 0;

    for(int i=0; i<n; i++) {
        cin >> a[i];
        if(a[i] % 2 == 0) cnt1++;
        else cnt2++;
    }

    // cout << *max_element(a.begin(), a.end()) << "\n";

    i64 k = 1;
    while (true) {
        for (int i = 0; i < n; i++) {
            if (a[i] % k != a[0] % k) {
                cout << k << "\n";
                return;
            }
        }
        k *= 2;
    }


    // if(cnt1 == n) {
    //     cout << 4 << "\n";
    //     return;
    // }
    // else if(cnt2 == n) {
    //     cout << 1 << "\n";
    //     return;
    // }

    // cout << 2 << "\n";
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