#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<pair<long long,int>> v;
        for (int i = 0; i < n; i++)
            v.push_back({a[i], i});

        sort(v.begin(), v.end());

        vector<long long> pref(n);
        pref[0] = v[0].first;
        for (int i = 1; i < n; i++)
            pref[i] = pref[i - 1] + v[i].first;

        vector<int> ans(n);
        ans[n - 1] = n - 1;

        for (int i = n - 2; i >= 0; i--)
        {
            if (pref[i] < v[i + 1].first)
                ans[i] = i;
            else
                ans[i] = ans[i + 1];
        }

        vector<int> res(n);
        for (int i = 0; i < n; i++)
            res[v[i].second] = ans[i];

        for (int i = 0; i < n; i++)
            cout << res[i] << " ";
        cout << "\n";
    }
    return 0;
}
