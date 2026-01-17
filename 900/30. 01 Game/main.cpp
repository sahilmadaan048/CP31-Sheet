
// https://codeforces.com/problemset/problem/1373/B

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s; cin >> s;
    int n = s.size();


    int z = 0, o = 0;
    for(auto ele: s) {
        if(ele == '0') {
            z++;
        } else {
            o++;
        }
    }

    if(min(z, o) % 2 == 1) {
        cout << "DA\n";
    } else {
        cout << "NET\n";
    }

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