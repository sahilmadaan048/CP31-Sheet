// https://codeforces.com/problemset/problem/1876/A


#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, p; cin >> n >> p;
    vector<long long> a(n), b(n); 
    for(long long i=0; i<n; i++) {
        cin >> a[i];
    }
    for(long long i=0; i<n; i++) {
        cin >> b[i];
    }
    
    vector<pair<long long, long long>> temp;

    for(int i=0; i<n; i++) {
        temp.push_back({b[i], a[i]});  // cost , capacity
    }
    // min cost to notify all residents

    // sort(temp.begin(), temp.end(), [&](const auto &a, const auto &b) {
    //     if(a.first > b.first) {
    //         return a.first < b.first;
    //     }
    //     else if(a.first == b.first) {
    //         return a.second < b.second;
    //     }
    // }, greater<int>());

    // sort by copst
    sort(temp.begin(), temp.end());

    long long ans =  p;
    long long remaining = n-1;

    for(auto x : temp) {
        if(remaining == 0) break;
        if(x.first >= p) {
            break;
        }
        long long take = min(x.second, remaining);
        ans += 1LL * (take ) * x.first;

        remaining -= take;
    }

    ans += (1LL * remaining * p);
    cout << ans << "\n";

    return;
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