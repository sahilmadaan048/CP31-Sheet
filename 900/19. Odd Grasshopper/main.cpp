// https://codeforces.com/problemset/problem/1607/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x, n;
    cin >> x >> n;

    long long r = n % 4;

    if (r == 1) {
        if (x & 1) x += n;
        else x -= n;
    }
    else if (r == 2) {
        if (x & 1) x -= 1;
        else x += 1;
    }
    else if (r == 3) {
        if (x & 1) x -= (n - 1);
        else x += (n - 1);
    }
    // r == 0 → no change

    cout << x << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}


// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     long long x, n; cin >> x >> n;
//     long long temp1 = x;
//     long long temp2 = n;
//     long long cnt = 1;
//     while(true) {
//         if(temp2 == 0) break;
//         if(temp1 & 1) temp1 += cnt;
//         else temp1 -= cnt;
//         cnt++;
//         temp2 -= 1;
//     }
//     cout << temp1 << "\n";
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) solve();
// }
