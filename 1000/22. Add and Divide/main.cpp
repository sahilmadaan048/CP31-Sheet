
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b; cin >> a >> b;	
    // if(a == b) {
    //     cout << 2 << "\n";
    //     return;
    // }
    // if(b > a) {
    //     cout << 1 << "\n";
    //     return;
    // }
    // int cnt = 0;
    // if(b == 1) {
    //     cnt++;
    //     b++;
    // }
    int ans = INT_MAX;

    for (int inc = 0; inc <= 30; inc++) {
        int bb = b + inc;
        if (bb <= 1) continue;

        int cnt = inc;
        int aa = a;

        while (aa > 0) {
            aa /= bb;
            cnt++;
        }

        ans = min(ans, cnt);
    }
    
    cout << ans << "\n";
    // while(true) {
    //     if(a == 0) break;
    //     if(b == a) {
    //         cout << cnt + 2 << "\n";
    //         b += 1;
    //         return;
    //     }
    //     if(b > a) {
    //         cout << cnt + 1 << "\n";
    //         return;
    //     }
    //     int a1 = a / b;
    //     int a2 = a - b + 1;
    //     if(a1 < a2) {
    //         cnt += 1;
    //         a /= b;
    //     } 
    //     else if(a1 <= a2) {
    //         cnt += a2;
    //         b += a2;
    //     }
    // }
    // cout << cnt << "\n";
    return;
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