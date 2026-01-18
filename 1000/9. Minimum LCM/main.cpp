// http://codeforces.com/problemset/problem/1765/M

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    int a = 1, b = n-1;
    for(int i=2; i*i <= n; i++){
        if(n%i == 0){
            a = n/i;
            break;
        }
    }
    cout << a << " " << n-a << '\n';
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}