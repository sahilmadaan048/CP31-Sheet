// https://codeforces.com/problemset/problem/1374/C	

#include <bits/stdc++.h>
using namespace std;

void solve()
{   
    int n; cin >> n;
    string s; cin >> s;
    // int n = s.size();

    stack<char> st;

    string temp = s;

    int cnt = 0;


    for(int i=0; i<n; i++) {
        char c = s[i];

        if(st.empty() and c == ')') {
            // temp.erase(i);
            // temp.push_back(s[i]);
            cnt++;
            continue;
        }

        else if(c == '(') {
            st.push(c);
        }

        else if(!st.empty() and c == ')' and st.top() == '(') {
            st.pop();
        }
    }

    cout << cnt << "\n";
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