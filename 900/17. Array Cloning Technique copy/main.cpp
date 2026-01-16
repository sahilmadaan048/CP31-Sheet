// https://codeforces.com/problemset/problem/1665/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;

    vector<int> a(n);
    unordered_map<int,int> mpp;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mpp[a[i]]++;
    }

    int maxi = 0;
    for(auto &p : mpp) {
        maxi = max(maxi, p.second);
    }

    int cnt = 0;

    while(maxi < n) {
        cnt++; // cloning operation
        int add = min(maxi, n - maxi);
        cnt += add;
        maxi += add;
    }

    cout << cnt << "\n";
}

int main() {
    int t; 
    cin >> t;
    while(t--) {
        solve();
    }
}
