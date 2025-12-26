// https://codeforces.com/problemset/problem/1853/A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, gap = INT_MAX;
    bool flag = false;
    cin >> n;
    int prev;
    cin >> prev;
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        if (x < prev)
            flag = true;
        else
            gap = min(gap, x - prev);
        prev = x;
    }
    if (!flag)
        cout << (gap / 2) + 1 << endl;
    else
        cout << 0 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}