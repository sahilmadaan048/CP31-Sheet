// https://codeforces.com/problemset/problem/1582/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);

    int ones = 0, zeroes = 0;
    for(int i=0; i<n; i++) {
        cin >> a[i];

        if(a[i] == 1) ones++;
        else if(a[i] == 0) zeroes++;
    }
    
    if(ones == 0) {
        cout << 0 << "\n";
        return;
    }
    long long ans = ones * (1LL << zeroes);
    cout << ans << "\n";
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

// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n; cin >> n;
//     vector<int> a(n);
//     for(int i=0; i<n; i++) {
//         cin >> a[i];
//     }
//     int s = accumulate(a.begin(), a.end(), 0);
//     // cout << s << " ";
//     int cnt = 0;
//     unordered_map<int, int> mpp;

//     int target = s - 1;

//     mpp[0] = 1;
//     int currSum = 0;
//     for(int i=0; i<n; i++) {
//         currSum += a[i];
//         if(mpp.find(currSum - target) != mpp.end()) {
//             cnt += mpp[currSum - target];
//         }
//         mpp[currSum]++;
//     }

//     cout << cnt << "\n";
//     return;
// }

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }