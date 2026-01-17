// https://codeforces.com/problemset/problem/1543/A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b; cin >> a >> b;
    if(a == b) {
        cout << 0 << " " << 0 << endl; // infinite excitement
    } else {
        long long g = abs(a-b);
        long long m = min(a%g,g-a%g);
        cout << g << " " << m << '\n';
    }
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