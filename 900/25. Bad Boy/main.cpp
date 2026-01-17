// https://codeforces.com/problemset/problem/1537/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll dist(ll x1, ll y1, ll x2, ll y2) {
    return abs(x1 - x2) + abs(y1 - y2);
}

void solve() {
    ll n, m, i, j;
    cin >> n >> m >> i >> j;

    ll sum1 = dist(i, j, 1, 1) + dist(i, j, n, m);
    ll sum2 = dist(i, j, 1, m) + dist(i, j, n, 1);

    if (sum1 >= sum2) {
        cout << "1 1 " << n << " " << m << "\n";
    } else {
        cout << "1 " << m << " " << n << " 1\n";
    }
}


// void solve()
// {
//     int n, m, i, j; cin >> n >> m >> i >> j;
//     // the distance wil be maximum of current ceel distance to the 4 corner vertices
//     // and then we double it since there are 2 yo yos
//     // 11 1m n1 nm
//     ll a = abs(i - 1) + (j - 1);
//     ll b = abs(i - 1) + (j - m);
//     ll c = abs(i - n) + (j - 1);
//     ll d = abs(i - n) + (j - m);

//     ll maxi =  max(a, max(b, max(c, d)));

//     if (a == maxi) 
//     {
//         cout << "1 1 1 1" << "\n";
//     }
//     else if(b == maxi) {
//         cout << 1 <<  " " << m << " " << 1 << " " << m << "\n";
//     }
//     else if(c == maxi) {
//         cout << n <<  " " << 1 << " " << n << " " << 1 << "\n";
//     }
//     else if(d == maxi) {
//         cout << n <<  " " << m << " " << n << " " << m << "\n";
//     }
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