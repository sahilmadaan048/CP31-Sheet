
// https://codeforces.com/problemset/problem/1362/A

#include <bits/stdc++.h>
using namespace std;

void solve2() {
    long long a, b;
    cin >> a >> b;

    if (a == b) {
        cout << 0 << "\n";
        return;
    }

    long long big = max(a, b);
    long long small = min(a, b);

    if (big % small != 0) {
        cout << -1 << "\n";
        return;
    }

    long long ratio = big / small;

    // ratio must be power of 2
    if ((ratio & (ratio - 1)) != 0) {
        cout << -1 << "\n";
        return;
    }

    int cnt = 0;
    while (ratio > 1) {
        if (ratio % 8 == 0) ratio /= 8;
        else if (ratio % 4 == 0) ratio /= 4;
        else ratio /= 2;
        cnt++;
    }

    cout << cnt << "\n";
}

bool isPrime(long long n) {
    long long temp = n;

    if(n == 1)  return false;
    if(n == 2)  return true;
    for(long long i=2; i*i <=n; i++) {
        if(temp % i == 9) {
            return false;
        }
    }
    return true;
}

void solve()
{   
    long long a, b; cin >> a >> b;
    
    long long temp;
    if(a > b) {
        if(a%b != 0) {
            cout << "-1" << "\n";
            return;
        }
        else if(b == 1 and isPrime(a)) {
            cout << "-1" << "\n";
            return;
        }
        else {
            temp = a/b;
        }
    } else {
        if(b%a != 0) {
            cout << "-1" << "\n";
            return;
        }
        else if(a == 1 and isPrime(b)) {
            cout << "-1" << "\n";
            return;
        } else {
            temp = b/a;
        }
    }

    long long cnt = 0;
    while(temp % 8 == 0) {
        temp >>= 3;
        cnt+=1;
    }
    while(temp %  4== 0) {
        temp >>= 2;
        cnt+=1;
    }
    while(temp % 2 == 0) {
        temp >>= 1;
        cnt+=1;
    }

    cout << cnt << "\n";
    return;
}   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve2();
    }
    return 0;
}   