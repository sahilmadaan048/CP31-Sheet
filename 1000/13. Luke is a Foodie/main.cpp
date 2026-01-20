// https://codeforces.com/problemset/problem/1704/B

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x; cin >> n >> x;
    vector<int> temp(n);
    // sort(temp.begin(), temp.end(), greater<int>());

    for(int i=0; i<n; i++) {
        cin >> temp[i];
    }

    int a = -x + temp[0], b = x + temp[0];

    int cnt = 0;
    for(int i=1; i<n; i++) {
        int aa = -x + temp[i], bb = x + temp[i];
        if((aa < a and bb < a) or (aa > b and bb > b)) {
            cnt += 1;
            a = aa;
            b = bb;
        }
        else {
            // UPDATE the intersection 
            a = max(a, aa);
            b = min(b, bb);
        }
    }
    cout << cnt << "\n";

    return;
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