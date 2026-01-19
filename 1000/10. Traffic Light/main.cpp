// https://codeforces.com/problemset/problem/1744/C

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;

    // duplicate string to handle cyclic nature
    string t = s + s;

    int lastGreen = -1;
    int ans = 0;

    // traverse from right to left
    for (int i = 2 * n - 1; i >= 0; i--) {
        if (t[i] == 'g') {
            lastGreen = i;
        }
        // only consider positions from the first half
        if (i < n && t[i] == c && lastGreen != -1) {
            ans = max(ans, lastGreen - i);
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
