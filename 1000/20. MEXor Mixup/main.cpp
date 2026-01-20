// https://codeforces.com/problemset/problem/1567/B

#include <bits/stdc++.h>
using namespace std;

int xor_upto(int n) {
    if(n % 4 == 0) return n;
    if(n % 4 == 1) return 1;
    if(n % 4 == 2) return n + 1;
    return 0;
}


void solve2()
{
    int a, b; cin >> a >> b;
    // int x = 0;
    // for(int i=0; i<=a-1; i++) {
    //     x ^= i;
    // }  

    int x = xor_upto(a - 1); 

    if(x == b) {
        cout << a << "\n";
    }
    else if((x^b) != a) {
        cout << a+1 << "\n";
    } else {
        cout << a + 2 << "\n";
    }

    // cout << cnt << "\n";

    return;
}


void solve()
{
    int a, b; cin >> a >> b;
    int temp = 0;
    for(int i=0; i<=a-1; i++) {
        temp ^= i;
    }	

    int cnt = 0;
    int i = 0;
    while(i < 20) {
        int b1 = ((temp) & (1 << i));
        int b2 = ((b) & (1 << i));
        if(b1 != b2) {
            cnt++;
        }
        i++;
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