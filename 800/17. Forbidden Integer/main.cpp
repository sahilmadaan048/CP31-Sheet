// https://codeforces.com/problemset/problem/1845/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, x;
    cin >> n >> k >> x;

    vector<int> allowed;
    for (int i = 1; i <= k; i++) {
        if (i != x) allowed.push_back(i);
    }

    sort(allowed.rbegin(), allowed.rend()); 

    int temp = n;
    unordered_map<int, int> mpp;

    for (int ele : allowed) {
        if (ele <= temp) {
            int cnt = temp / ele;
            mpp[ele] = cnt;
            temp -= cnt * ele;
        }
    }

    if (temp == 0) {
        cout << "YES\n";
        int total = 0;
        for (auto &p : mpp) total += p.second;
        cout << total << "\n";
        for (auto &p : mpp) {
            for (int i = 0; i < p.second; i++)
                cout << p.first << " ";
        }
        cout << "\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
