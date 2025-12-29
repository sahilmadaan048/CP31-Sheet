// https://codeforces.com/problemset/problem/1666/D

/*
1<= x <= 3- ippercase letters in the s and t
s - start word 
t - end word


dont care about 2st letter 
other letters must not be the first occiurence in the s string

*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;

    unordered_map<char,int> need, used;

    for(char c : t) need[c]++;

    int i = s.size() - 1;
    int j = t.size() - 1;
    bool ok = true;

    while(i >= 0 && j >= 0) {
        used[s[i]]++;

        if(s[i] == t[j]) {
            if(used[s[i]] > need[s[i]]) {
                ok = false;
                break;
            }
            i--;
            j--;
        } else {
            i--;
        }
    }

    if(j >= 0) ok = false;

    for(char c : t) {
        if(used[c] < need[c]) {
            ok = false;
            break;
        }
    }

    if(ok) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        solve();
    }
}
