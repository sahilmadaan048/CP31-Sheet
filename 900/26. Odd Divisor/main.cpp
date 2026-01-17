// https://codeforces.com/problemset/problem/1475/A


#include <bits/stdc++.h>
using namespace std;



void solve() {
    long long n;
    cin >> n;

    while (n % 2 == 0) {
        n /= 2;
    }

    if (n > 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}

// void solve()
// {
//     long long n; cin >> n;
//     vector<int> temp;

//     for(long long i=1; i*i <= n; i++) {
//         if(n % i == 0) {
//             if(i & 1) {
//                 cout << "YES\n";
//                 return;
//             }
//             if(i != n/i) {
//                 if((n / i) & 1) {
//                     cout << "YES\n";
//                     return;
//                 }
//             }
//         } 
//     }

//     cout << "NO\n";
//     return;
// }

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