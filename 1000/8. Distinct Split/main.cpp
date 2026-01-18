// // https://codeforces.com/problemset/problem/1791/D

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    unordered_map<char,int> rightCnt;
    unordered_set<char> leftSet;

    for(char c : s) {
        rightCnt[c]++;
    }

    int ans = 0;

    for(int i = 0; i < n - 1; i++) {
        char c = s[i];

        // move s[i] from right to left
        leftSet.insert(c);
        rightCnt[c]--;
        if(rightCnt[c] == 0) {
            rightCnt.erase(c);
        }

        ans = max(ans, (int)leftSet.size() + (int)rightCnt.size());
    }

    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;

//     int ans = 0;

//     for (int idx = 0; idx < n - 1; idx++) {
//         set<char> st1, st2;

//         // left [0..idx]
//         for (int i = 0; i <= idx; i++) {
//             st1.insert(s[i]);
//         }

//         // right [idx+1..n-1]
//         for (int i = idx + 1; i < n; i++) {
//             st2.insert(s[i]);
//         }

//         ans = max(ans, (int)st1.size() + (int)st2.size());
//     }

//     cout << ans << "\n";
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) solve();
//     return 0;
// }
