// https://codeforces.com/problemset/problem/1411/B

#include <bits/stdc++.h>
using namespace std;

bool isFair(long long n) {
    long long temp = n;

    while(temp) {
        int r = temp % 10;
        temp /= 10;
        if(r != 0) {
            if(n % r != 0) {
                return false;
            }
        }
    }
    return true;
}

void solve()
{
    string s; cin >> s;
    int n = s.size();
    long long p = stoll(s);
    for(long long i=p; i<=pow(10, n); i++) {
        if(isFair(i)) {
            cout << i << endl;
            return;
        }
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