// https://codeforces.com/problemset/problem/1374/B

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    int cnt2 = 0, cnt3 = 0;

    while (n % 2 == 0) {
        n /= 2;
        cnt2++;
    }

    while (n % 3 == 0) {
        n /= 3;
        cnt3++;
    }


    // leftover prime factor
    if (n != 1 || cnt2 > cnt3) {
        cout << -1 << "\n";
        return;
    }

    cout << cnt3 + (cnt3 - cnt2) << "\n";
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