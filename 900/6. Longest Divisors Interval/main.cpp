// https://codeforces.com/problemset/problem/1855/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long

void solve()
{
    ull n;
    cin >> n;
    ll i = 1;
    for (i; i <= n; i++)
    {
        if (n % i != 0)
            break;
    }
    cout << i - 1 << endl;
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