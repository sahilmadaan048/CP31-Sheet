// https://codeforces.com/problemset/problem/1438/B

#include <bits/stdc++.h>
using namespace std;

void solve3() {
        int N; cin >> N;
        set<int> B; for (int i = 0; i < N; i++) { int b; cin >> b; B.insert(b); }
        cout << (int(B.size()) < N ? "YES" : "NO") << '\n';

}

void solve2() {
    // powers of 2 will give same sum again only
    // uf there is some sort of repition of elements
    // if not then its fine
    int n;
    cin >> n;


    unordered_set<long long> seen;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;

        if (seen.count((x))) {
            cout << "YES\n";
            return;
        }
        seen.insert(x);
    }

    cout << "NO\n";
}

void solve()  // linda overkill since it gives TLE
{
    int n; cin >> n;
    vector<long long> b(n), a(n);
    for(int i=0; i<n; i++) {
        cin >> b[i];
        a[i] = (long long)(1 << b[i]);
    }

    vector<long long> prefix(n);
    prefix[0] = a[0];

    for(int i=1; i<n; i++) {
        prefix[i] = prefix[i-1] + a[i];
    }

    long long ans = 0;
    bool flag = false;

    unordered_map<long long, int> mpp;

    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            long long subsum = prefix[j];
            if(i > 0) {
                subsum -= prefix[i-1];
            }
            mpp[subsum]++;
            if(mpp[subsum] > 1) {
                flag = true;
            }
        }
    }

    if(flag) {
        cout << "YES\n";
        return;
    } else {
        cout << "NO\n";
        return;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve3(); 
    }
    return 0;
}   