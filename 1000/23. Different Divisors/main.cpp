
#include <bits/stdc++.h>
using namespace std;

void solve()
{	
    int d; cin >> d;
    vector<int> sieve;

    for(int i=d+1; ; i++) {
        bool flag = true;
        for(int j=2; j*j <= i; j++) {
            if(i % j == 0) {
                flag = false;
                break;
            }
        }
        if(flag) {
            sieve.push_back(i);
            break;
        }
    }

    for(int i=sieve.back() + d; ; i++) {
        bool flag = true;
        for(int j=2; j*j <= i; j++) {
            if(i % j == 0) {
                flag = false;
                break;
            }
        }
        if(flag) {
            sieve.push_back(i);
            break;
        }
    }

    cout << min(1LL * sieve[0] * sieve[1], 1LL * sieve[0]* sieve[0]* sieve[0]) << "\n";

    return;
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