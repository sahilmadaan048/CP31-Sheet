// https://codeforces.com/problemset/problem/1903/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool is_sorted(vector<int>& temp) {
    vector<int> arr = temp;
    sort(temp.begin(), temp.end());
    return arr == temp;
}

void solve() {
    int n, k; cin >> n >> k;
    vector<int> temp(n);
    for(int i=0; i<n; i++) cin >> temp[i];
    if(is_sorted(temp) || k > 1) {
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