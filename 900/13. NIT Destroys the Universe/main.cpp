// https://codeforces.com/problemset/problem/1696/B

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int count = 0;
    vector<int> arr(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0 and arr[i - 1] == 0)
            count++;
    }
    cout << min(count, 2) << endl;
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