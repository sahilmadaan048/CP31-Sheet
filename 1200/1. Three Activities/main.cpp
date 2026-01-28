// https://codeforces.com/problemset/problem/1914/D

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n), b(n), c(n);	

    vector<pair<int, int>> temp1, temp2, temp3;

    for(int i=0; i<n; i++) {
        cin >> a[i];
        temp1.push_back({a[i], i});
    }
    for(int i=0; i<n; i++) {
        cin >> b[i];
        temp2.push_back({b[i], i});
    }
    for(int i=0; i<n; i++) {
        cin >> c[i];
        temp3.push_back({c[i], i});
    }

    sort(temp1.rbegin(), temp1.rend());
    sort(temp2.rbegin(), temp2.rend());
    sort(temp3.rbegin(), temp3.rend());


    int ans = 0;

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            for(int k=0; k<3; k++) {
                auto p1 = temp1[i];
                auto p2 = temp2[j];
                auto p3 = temp3[k];
       

                if(p1.second != p2.second and p2.second != p3.second and p3.second != p1.second) {
                    ans = max(ans, (p1.first + p2.first + p3.first));
                }
            }
        }
    }

    cout << ans << "\n";
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