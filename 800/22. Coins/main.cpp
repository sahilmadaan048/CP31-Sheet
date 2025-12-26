// https://codeforces.com/problemset/problem/1814/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long
bool solve(ll n, ll k)
{
    if (n % 2 == 0 or n % k == 0)
        return true;
    else if (n % 2 and k % 2)
        return true;
    else
        return false;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    cout << (solve(n, k) ? "YES" : "NO");

    cout << endl;
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