
#include <bits/stdc++.h>
using namespace std;

void solve()
{   
    int n, k; 
    cin >> n >> k;
    string s; 
    cin >> s;

    vector<int> pref(n, 0);
    pref[0] = (s[0] == 'B');

    for(int i = 1; i < n; i++) {
        pref[i] = pref[i-1] + (s[i] == 'B');
    }

    int mini = k;

    // for(int i = 0; i < n; i++) {
    //     for(int j = i; j < n; j++) {
    //         int blacks = pref[j] - (i > 0 ? pref[i-1] : 0);

    //         if(blacks == k) {
    //             cout << 0 << "\n";
    //             return;
    //         }

    //         mini = min(mini, abs(blacks - k));
    //     }
    // }
    for(int i = 0; i + k - 1 < n; i++) {
        int j = i + k - 1;
        int blacks = pref[j] - (i > 0 ? pref[i-1] : 0);
        mini = min(mini, k - blacks);
    }

    cout << mini << "\n";
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