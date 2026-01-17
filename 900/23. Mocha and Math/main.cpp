// https://codeforces.com/problemset/problem/1559/A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;

    vector<int> a(n);

    int ans;
    cin >> ans;

    for(int i=1; i<n; i++) {
        cin >> a[i];
        ans &= a[i];
    }

    // int mini = *max_element(a.begin(), a.end());

    // for(int i=0; i<n-1; i++) {
    //     for(int j=i+1; j<n; j++) {
    //         mini = min(mini, (a[i] & a[j]));
    //     }
    // }    

    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}