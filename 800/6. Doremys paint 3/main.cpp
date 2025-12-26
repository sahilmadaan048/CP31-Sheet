// https://codeforces.com/problemset/problem/1890/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    vector<int> temp;

    unordered_map<int, int> mpp;
    for(auto ele: a) {
        mpp[ele]++;
    }
    bool flag = true;

    if(mpp.size() > 2) {
        flag = false;
    }   
    for(auto p: mpp) {
        if(p.second < n/2) {
            flag = false;
        }
    }
    if(flag) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return;
} 

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}