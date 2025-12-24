// https://codeforces.com/problemset/problem/1903/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> temp(n);
    for(int i=0; i<n; i++) {
        cin >> temp[i];
    }
    vector<int> temp2 = temp;
    sort(temp2.begin(), temp2.end());
    if(temp2 == temp or k>1){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}


int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}