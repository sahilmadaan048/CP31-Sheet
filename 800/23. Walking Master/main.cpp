// https://codeforces.com/problemset/problem/1806/A


#include <bits/stdc++.h>
using namespace std;

int solve2(int a,int b, int c, int d){
       if(b>d) return -1;
       int up = d-b;
       int new_a = a+up;
       if(new_a<c) return -1;
       int left = new_a-c;
       return up+left;
}

void solve() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    cout << solve2(a, b, c, d) << "\n";
    
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}