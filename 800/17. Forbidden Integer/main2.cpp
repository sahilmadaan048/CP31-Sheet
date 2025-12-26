#include <bits/stdc++.h>
using namespace std;

bool greedy(int n, vector<int>& allowed, unordered_map<int,int>& mpp) {
    mpp.clear();
    int temp = n;
    for (int ele : allowed) {
        if (ele <= temp) {
            int cnt = temp / ele;
            mpp[ele] = cnt;
            temp -= cnt * ele;
        }
    }
    return temp == 0;
}

void solve() {
    int n, k, x;
    cin >> n >> k >> x;

    vector<int> allowed;
    for (int i = 1; i <= k; i++) if (i != x) allowed.push_back(i);
    sort(allowed.rbegin(), allowed.rend());

    unordered_map<int,int> mpp;

    if (greedy(n, allowed, mpp)) {
        cout << "YES\n";
    } else {
        bool fixed = false;
        for (int v : allowed) {
            if (mpp[v] > 0) {
                mpp[v]--;
                if (mpp[v] == 0) mpp.erase(v);

                if (greedy(n - v, allowed, mpp)) {
                    mpp[v]++;
                    fixed = true;
                    break;
                }

                mpp[v]++;
            }
        }
        if (!fixed) {
            cout << "NO\n";
            return;
        }
    }

    int total = 0;
    for (auto &p : mpp) total += p.second;

    cout << total << "\n";
    for (auto &p : mpp)
        for (int i = 0; i < p.second; i++)
            cout << p.first << " ";
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}