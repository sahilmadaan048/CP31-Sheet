// https://codeforces.com/problemset/problem/1913/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{   
    string s; cin >> s;
    int n = s.size();

    // delete char -> 1
    // any swap
    vector<int> cnt(2, 0);
    for (char c : s) {
        cnt[c - '0']++;
    }
    
    for (int i = 0; i <= n; i++) {
        if (i == n || cnt[1 - (s[i] - '0')] == 0) {
            cout << n - i << "\n";
            break;
        }
        cnt[1 - (s[i] - '0')]--;
    }
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