// https://codeforces.com/problemset/problem/1380/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n; cin >> n;
    bool flag = false;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    for(int i=1; i<n-1; i++) {
        if(a[i] > a[i-1] and a[i] > a[i+1]) {
            cout << "YES\n";
            cout << i << " " << i + 1 << " " << i + 2 << "\n";
            return;
        }
    }

    cout << "NO\n";

        // for(int i=0; i<n; i++) {
        //     for(int j=i+1; j<n-1; j++) {
        //         for(int k=j+1; k<n; k++) {
        //             if(temp[j] > temp[i] and temp[j] > temp[k]) {
        //                 flag = true;
        //                 cout << "YES\n";
        //                 cout << i + 1 << " " << j +1 << " " << k + 1 << "\n";
        //                 break;
        //             }
        //         }
        //         if(flag) break;
        //     }
        //     if(flag) break;
    // }

    // if(!flag) {
    //     cout << "NO\n";
    // }
    return;
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