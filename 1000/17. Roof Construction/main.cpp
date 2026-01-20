// https://codeforces.com/problemset/problem/1632/B

#include <bits/stdc++.h>
using namespace std;

void solve3() {
    int n;
    cin >> n;
    int k = 0;
    while((1 << (k + 1)) <= n - 1) ++k; 
    for(int i = (1 << k) - 1; i >= 0; i--) {
        cout << i << ' ';
    }
    for(int i = (1 << k); i < n; i++) {
        cout << i << ' ';
    }
    cout << '\n';
}

void solve2() {
    int n; cin >> n;

    if (n == 1) {
        cout << 0 << "\n";
        return;
    }

    int p = 1;
    while (p * 2 <= (n)) p *= 2;  
    vector<int> perm;

    // Special XOR sequence for 0..p-1
    perm.push_back(0);
    perm.push_back(p-1);
    for (int i = 1; i < p-1; i++) {
        perm.push_back(i);
    }

    for (int i = p; i < n; i++) perm.push_back(i);

        for (int x : perm) cout << x << " ";
            cout << "\n";
    }

    pair<int,int> maxXorPair(int n) {
    int msb = 31 - __builtin_clz(n); // position of most significant bit
    int maxXor = (1 << (msb + 1)) - 1;

    if(maxXor <= n) {
        return {0, maxXor};
    } else {
        // If maxXor > n, linear scan to find i maximizing i^n
        int i_best = 0;
        int max_val = 0;
        for(int i = 0; i <= n; i++) {
            int val = i ^ n;
            if(val > max_val) {
                max_val = val;
                i_best = i;
            }
        }
        return {i_best, n};
    }
}

void solve()
{
    int n; cin >> n;
    int xr = 0;
    // int ii = 0, jj = 0;
    // for(int i=0; i<n; i++) {
    //     for(int j=n; j>=0; j--) {
    //         if((i ^ j) > xr) {
    //             xr = max(xr, i^j);
    //             ii = i, jj = j;
    //         }
    //     }
    // }
    // cout << ii << " " << jj << "\n";
    // cout << xr << "\n\n";

    auto p = maxXorPair(n-1);
    unordered_set<int> st;
    st.insert(p.first);
    st.insert(p.second);

    for(int i=0; i<n; i++) {
        if(!st.count(i)) {
            cout << i << " ";
        }
    }

    cout << p.first << " " << p.second << "\n";
    // cout << "xr is: " << (p.first ^ p.second) << "\n\n";
    // return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve3();
    }
    return 0;
}   