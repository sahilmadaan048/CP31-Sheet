// https://codeforces.com/problemset/problem/1917/B

#include <bits/stdc++.h>
using namespace std;

/*

    either remove s0 or s1 at a time
*/

void solve()
{	
    int n; cin >> n;
    string s; cin >> s;
    int cnt = 0;

    unordered_set<int> st;

    for(int i=0; i<n; i++) {
        st.insert(s[i]);
        cnt += st.size();
    }

    cout << cnt << "\n" ;   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}   