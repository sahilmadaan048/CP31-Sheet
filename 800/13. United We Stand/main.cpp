// https://codeforces.com/problemset/problem/1859/A

#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int mx = INT_MIN, count = 0;
    for (auto x : arr)
    {
        if (x > mx)
            mx = x, count = 1;
        else if (x == mx)
            count++;
    }
    if (count == n)
        cout << -1 << endl;
    else
    {
        int m = n - count;
        cout << m << " " << count << endl;
        for (auto x : arr)
            if (x != mx)
                cout << x << " ";
        cout << endl;
        while (count--)
            cout << mx << " ";
        cout << endl;
    }
}

int32_t main()
{

    int T = 1;
    cin >>  T;
    while (T--)
    {
        solve();
    }
    return 0;
}
