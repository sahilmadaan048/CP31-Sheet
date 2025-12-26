// https://codeforces.com/problemset/problem/1834/A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int neg = 0, pos = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
            pos++;
        else
            neg++;
    }
    int sum = pos - neg, need = 0;
    if (sum < 0)
        need = (abs(sum) + 1) / 2;
    neg -= need;
    cout << need + (neg % 2) << endl;
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