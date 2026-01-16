// https://codeforces.com/problemset/problem/1606/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int n = s.size();

    if(s[0] == s[n-1]) {
        cout << s << "\n";
    } else {
        s[0] = (s[0] == 'a') ? 'b' : 'a';
        cout << s << "\n";
    }
 }

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
