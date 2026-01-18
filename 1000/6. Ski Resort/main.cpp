// https://codeforces.com/problemset/problem/1840/C

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // k - min nnumber of days at the resort >= k days
    // q - max comfortable temp for dima
    int n, k, q; cin >> n >> k >> q;

    // temp in the resort
    vector<int> a(n);

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    // ocunt number of subarrays of thr given array a 
    // such that all elements  <= q in that subarray
    long long ans = 0;
    long long cnt = 0;

    for(int i=0; i<n; i++) {
        if(a[i] <= q) {
            cnt++;
        }
        else {
            if(cnt >= k) {
                int x = cnt - k + 1;
                ans += (x) * ( x + 1 ) / 2;
            }
            cnt = 0;
        }
    }

    if(cnt >= k) {
        int x = cnt - k + 1;
        ans += (x) * (x + 1) / 2;
    }

    cout << ans << "\n";
    return;
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