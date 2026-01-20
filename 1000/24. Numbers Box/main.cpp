// https://codeforces.com/problemset/problem/1447/B

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int neg = 0, mn = 1e9, sum = 0, zero = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            int x;
            cin >> x;
            mn = min(mn, abs(x));
            if(x < 0){
                neg++;
            }
            sum += abs(x);
            if(x == 0){
                zero = 1;
            }
        }
    }
    if(zero == 1){
        cout << sum << '\n';
    }
    else if(neg % 2 == 0){
        cout << sum << '\n';
    }
    else{
        cout << sum - 2 * mn << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}   