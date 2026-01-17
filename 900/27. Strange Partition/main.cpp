// https://codeforces.com/problemset/problem/1471/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, x; cin >> n >> x;
    std::vector<int> v(n);

    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    // print minimal and maximal beauty

    ll sum = accumulate(v.begin(), v.end(), 0LL);
     // minimal beauty
    ll mini = (sum + x - 1) / x;
    
    ll maxi = 0;
    for(auto ele: v) {
        maxi += (ele  + x - 1 ) / x;
    } 
    cout << mini << " " << maxi << "\n";
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