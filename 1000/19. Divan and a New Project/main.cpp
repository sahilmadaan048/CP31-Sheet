
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<long long> a(n);

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }	

    vector<pair<long long, int>> temp;
    for(int i=0; i<n; i++) {
        temp.push_back({a[i], i });
    }

    // sort in dec order of a[i]
    sort(temp.begin(), temp.end(), greater<>());

    vector<int> pos(n);
    int cur = 1;    

    for(int i=0; i<n; i++) {
        if(i%2 == 0) {
            pos[temp[i].second] = cur;
        } else {
            pos[temp[i].second] = -cur;
            cur++;
        }
    }


    long long ans = 0;
    for(int i=0; i<n;i++) {
        ans += 2LL * (a[i] * abs(pos[i]));
    }
    // cout<< "ans: " << ans << "\n";
    cout<<  ans << "\n";
    cout << cur << " ";
    for(auto ele: pos) {
        cout << ele + cur << " ";
    }
    cout << "\n";

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