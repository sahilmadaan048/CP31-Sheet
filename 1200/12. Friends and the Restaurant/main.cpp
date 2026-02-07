// https://codeforces.com/problemset/problem/1729/D

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;

    vector<int> x(n), y(n);

    for(int i=0; i<n; i++) {
        cin >> x[i];
    }

    for(int i=0; i<n; i++) {
        cin >> y[i];
    }

    // vector<pair<int, int>> temp;

    vector<int> temp2;

    for(int i=0; i<n; i++) {
        // temp.push_back({x[i], y[i]});
        temp2.push_back(y[i] - x[i]);

        // if this is neg then he overspends
        // otherwise he is fine
    }

    sort(temp2.begin(), temp2.end());

    // lets soer in increasing order tof the difference

    /*
        
        can we use 2 piintters here and somehow gropup thiose peoplr otgether 
        for ehich the sum f tghe values in temo2
        at which the piinters are pointing >= 0

      */

    int i = 0;
    int j = n-1;

    int cnt = 0;

    while(i < j) {
        int sum = temp2[i] + temp2[j];

        if(sum >= 0) {
            cnt++;
            i++;
            j--;
        }
        else {
            i++;
            // j--;
        }
    }
    cout << cnt  << "\n";

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