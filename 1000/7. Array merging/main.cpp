
// // https://codeforces.com/problemset/problem/1831/B


#include <bits/stdc++.h>

using namespace std;

int32_t main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        vector<int> b(n + 1);
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; ++i)
        {
            cin >> b[i];
        }
        vector<int> fa(n + n + 1);
        vector<int> fb(n + n + 1);
        int p = 1;
        for (int i = 2; i <= n; ++i)
        {
            if (a[i] != a[i - 1])
            {
                fa[a[i - 1]] = max(fa[a[i - 1]], i - p);
                p = i;
            }
        }
        fa[a[n]] = max(fa[a[n]], n - p + 1);

        p = 1;
        for (int i = 2; i <= n; ++i)
        {
            if (b[i] != b[i - 1])
            {
                fb[b[i - 1]] = max(fb[b[i - 1]], i - p);
                p = i;
            }
        }
        fb[b[n]] = max(fb[b[n]], n - p + 1);

        int ans = 0;
        for (int i = 1; i <= n + n; ++i)
        {
            ans = max(ans, fa[i] + fb[i]);
        }

        cout << ans << '\n';
    }
}
// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;

//     vector<int> a(n), b(n);
//     for (int i = 0; i < n; i++) cin >> a[i];
//     for (int i = 0; i < n; i++) cin >> b[i];

//     unordered_map<int,int> maxa, maxb;

//     // compute maxa(x)
//     int cnt = 1;
//     for (int i = 1; i < n; i++) {
//         if (a[i] == a[i - 1]) {
//             cnt++;
//         } else {
//             maxa[a[i - 1]] = max(maxa[a[i - 1]], cnt);
//             cnt = 1;
//         }
//     }
//     maxa[a[n - 1]] = max(maxa[a[n - 1]], cnt);

//     // compute maxb(x)
//     cnt = 1;
//     for (int i = 1; i < n; i++) {
//         if (b[i] == b[i - 1]) {
//             cnt++;
//         } else {
//             maxb[b[i - 1]] = max(maxb[b[i - 1]], cnt);
//             cnt = 1;
//         }
//     }
//     maxb[b[n - 1]] = max(maxb[b[n - 1]], cnt);

//     int ans = 0;

//     // combine
//     for (auto &p : maxa) {
//         int x = p.first;
//         ans = max(ans, maxa[x] + maxb[x]);
//     }

//     cout << ans << "\n";
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;


// void solve()
// {
//     int n; cin >> n;
//     vector<int> a(n), b(n);

//     for(int i=0; i<n; i++) cin >> a[i];
//         for(int i=0; i<n; i++) cin >> b[i];

//     // maximum length of a subarray consisting of equal values across all merges.

//             vector<pair<int, int>> temp1, temp2;
//         unordered_map<int, int> mpp1, mpp2;


//         int i = 0;
//         int cnt = 1;
//         int last = a[i];
//         i++;
//         while(i < n) {
//             if(a[i] == last) {
//                 cnt++;
//             } else {
//                 temp1.push_back({last, cnt});
//                 mpp1[last] = cnt;
//                 last = a[i];
//                 cnt = 1;
//             }
//             i++;
//         }
//         temp1.push_back({last, cnt});
//         mpp1[last] = max(mpp1[last], cnt);
//     // for(auto p: mpp1) {
//     //     cout << p.first << " " << p.second << "\n";
//     // }
//     // cout << "\n";
//         i = 0;
//         cnt = 1;
//         last = b[i];
//         i++;
//         while(i < n) {
//             if(b[i] == last) {
//                 cnt++;
//             } else {
//                 temp2.push_back({last, cnt});
//                 mpp2[last] = cnt;
//                 last = b[i];
//                 cnt = 1;
//             }
//             i++;
//         }
//         temp2.push_back({last, cnt});
//         mpp2[last] = max(mpp2[last], cnt);
//     // for(auto p: mpp2) {
//     //     cout << p.first << " " << p.second << "\n";
//     // }
//     // cout << "\n";

//         unordered_set<int> st;
//         for(auto p: temp2) {
//             st.insert(p.first);
//         }

//         vector<int> temp3;

//         for(auto p: temp1) {
//             temp3.push_back(p.first);
//         }

//         sort(temp3.begin(), temp3.end(), greater<int>());

//         int ans = 0;
//         for(auto p: mpp2) {
//             int x = p.first;
//             ans = max(ans, mpp1[x] + mpp2[x]);
//         }

//         cout << ans << "\n";
//     }

//     int main()
//     {
//         int t;
//         cin >> t;

//         while (t--)
//         {
//             solve();
//         }

//         return 0;
//     }