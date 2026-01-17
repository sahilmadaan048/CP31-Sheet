// https://codeforces.com/problemset/problem/1849/B


#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    long long k;
    cin >> n >> k;

    vector<pair<long long,int>> v;

    for (int i = 1; i <= n; i++) {
        long long a;
        cin >> a;
        long long rem = a % k;
        if (rem == 0) rem = k;
        v.push_back({-rem, i});  // negative for descending sort
    }

    sort(v.begin(), v.end());

    for (auto &x : v) {
        cout << x.second << " ";
    }
    cout << "\n";
}

// void solve()
// {
//     int n;
//     long long k;
//     cin >> n >> k;

//     priority_queue<pair<long long, int>> pq;

//     for (int i = 1; i <= n; i++) {
//         long long a;
//         cin >> a;
//         pq.push({a, -i});   // store -index for tie-breaking
//     }

//     vector<int> order;

//     while (!pq.empty()) {
//         auto [hp, neg_idx] = pq.top();
//         pq.pop();

//         int idx = -neg_idx;
//         hp -= k;

//         if (hp <= 0) {
//             order.push_back(idx);   // monster dies
//         } else {
//             pq.push({hp, -idx});    // still alive
//         }
//     }

//     for (int x : order) cout << x << " ";
//     cout << "\n";
// }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}

// #include <bits/stdc++.h>
// using namespace std;


// void solve()
// {
//     int n, k; cin >> n >> k;
//     vector<int> a(n);

//     for(int i=0; i<n; i++) {
//         cin >> a[i];
//     }

//     vector<pair<int, int>> mpp;

//     for(int i=0; i<n; i++) {
//         int hits = (a[i] + k - 1) / k;
//         mpp.push_back({hits, i});
//     }


//     sort(mpp.begin(), mpp.end());


//     for(auto ele: mpp) {
//         cout << ele.second + 1 << " ";
//     }

//     cout << "\n";
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

