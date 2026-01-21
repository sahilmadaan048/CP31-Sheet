// https://codeforces.com/problemset/problem/1155/A

#include <bits/stdc++.h>
using namespace std;

void solve2() {
    int n;
    string s;
    cin >> n >> s;
    
    for (int i = 1; i < int(s.size()); ++i) {
        if (s[i] < s[i - 1]) {
            cout << "YES" << endl;
            cout << i << " " << i + 1 << endl;
            return;
        }
    }
    
    cout << "NO" << endl;
}

void solve()
{	
    int n; cin >> n;
    string s;  cin >> s;

    vector<vector<int>> temp(n, vector<int>(26, 0));

    char c = s[0];
    temp[0][c - 'a']+=1;

    for(int  i=1; i<n; i++) {
        char c = s[i];
        for(int j=0; j<26; j++) {
            temp[i][j] = temp[i-1][j];
        }
        temp[i][c - 'a']++;
    }

    pair<int, int> p = {-1, -1};
    // for(int i=n-1; i>=0; i--) {

    //     char c = s[i];
    //     int idx = c-'a';
    //     for(int j=idx+1; j<26; j++) {
    //         if(temp[i][j] > 1) {
    //             p = {i, j};
    //             break;
    //         }
    //     }
    // }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i] > s[j]) {
                cout << "YES\n";
                cout << i + 1 << " " << j + 1 << "\n";
                return;
            }
        }
    }
    cout << "NO\n";


    if(p == make_pair(-1, -1)) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    cout << p.second + 1 << " " << p.first + 1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    while (t--) {
        solve2();
    }
    return 0;
}   