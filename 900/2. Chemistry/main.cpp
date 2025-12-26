// https://codeforces.com/problemset/problem/1883/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
      mp[s[i]]++;
    }
    int odd = 0;
    for (auto const &i : mp)
    {
      odd += (i.second % 2 == 1);
    }
    (odd > k + 1) ? cout << "NO\n" : cout << "YES\n";
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}