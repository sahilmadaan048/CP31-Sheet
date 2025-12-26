// https://codeforces.com/problemset/problem/1857/A 


#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n);

    int cnt = 0;
    for(int i=0; i<n; i++) {
        cin >> a[i];
        if(a[i]&1) cnt++;
    }

    if(cnt&1) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
    }

    return;
}

int32_t main()
{
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}

    