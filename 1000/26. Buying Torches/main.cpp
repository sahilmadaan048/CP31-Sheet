// https://codeforces.com/problemset/problem/1418/A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long x, y, k; cin >> x >>  y >> k;	

    long long cnt = 0;
    long long s = 1;
    // while(s < (k * (y+1))) {
    //     cnt += 1;
    //     s += (x-1);
    // }
    // total sticks needed
    __int128 need = (__int128)k * (y + 1) - 1;

    cnt += (need + (x - 2)) / (x-1);

    cnt += k;
    // cout << "hello world\n";
    cout << cnt << "\n";
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