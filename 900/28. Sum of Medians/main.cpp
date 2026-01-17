// https://codeforces.com/problemset/problem/1440/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
    int n, k; cin >> n >> k;

    vector<int> temp(n * k);

    for(int i=0; i<n*k; i++) {
        cin >> temp[i];
    }

    // maximum sum of medians of all k arrays, each of size n
    int mid = (n + 1) / 2 - 1;
    int step = n - mid;
    ll last = n*k;
    ll ans = 0;
    while(k--) {
        last -= step;
        if(last < 0) break;
        ans += temp[last];
    }
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