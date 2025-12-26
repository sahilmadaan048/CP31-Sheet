// https://codeforces.com/problemset/problem/1858/A

#include "bits/stdc++.h"
using namespace std;

void solve(){
    int a, b, c; cin >> a >> b >> c;
    if(c&1) {
        a += c/2+1;
        b += c/2;
    } else {
        a += c/2;
        b += c/2;
    }
    if(a > b) {
        cout << "First\n";
    } else {
        cout << "Second\n";
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

    