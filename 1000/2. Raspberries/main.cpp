// https://codeforces.com/problemset/problem/1883/C


#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = INT_MAX;

    // Case k != 4
    if (k != 4) {
        for (int i = 0; i < n; i++) {
            int need = (k - a[i] % k) % k;
            ans = min(ans, need);
        }
        cout << ans << "\n";
        return;
    }

    // Case k == 4
    int even = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) even++;
        int need = (4 - a[i] % 4) % 4;
        ans = min(ans, need);
    }

    // need two even numbers
    ans = min(ans, max(0, 2 - even));

    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n, k; cin >> n >> k;
//     vector<int> a(n);

//     int cnt =0 ;
//     for(int i=0; i<n; i++) {
//         cin >> a[i];
//         if(a[i]  % 2 == 0) cnt++;
//     }
//     if(k == 4 and n >= 2) {
//         cout << max(0, 2 - cnt);
//         return;
//     }
// }

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }