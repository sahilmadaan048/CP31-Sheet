// https://codeforces.com/problemset/problem/1766/A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int digits = 0, ld;
    while (n > 0)
    {
        ld = n % 10;
        n /= 10;
        digits++;
    }
    cout << (ld + (digits - 1) * 9);
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