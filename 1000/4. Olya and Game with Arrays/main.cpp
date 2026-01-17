// // https://codeforces.com/problemset/problem/1859/B

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; 
    cin >> n;

    vector<vector<int>> temp;

    int idx = 0;
    int mini = INT_MAX;

        long long sumSecond = 0;
    int minFirst = INT_MAX;
    int minSecond = INT_MAX;

    for(int i = 0; i < n; i++) {
        int m; 
        cin >> m;
        vector<int> a(m);

        for(int j = 0; j < m; j++) {
            cin >> a[j];
            if(a[j] < mini) {   
                mini = a[j];
                idx = i;
            }
        }

        sort(a.begin(), a.end());
        temp.push_back(a);

        minFirst = min(minFirst, a[0]);
        minSecond = min(minSecond, a[1]);
        sumSecond += a[1];

    }

    // long long ans = 0;

    // take smallest from the array with global minimum
    // ans += temp[idx][0];

    // take second smallest from all other arrays
    // for(int i = 0; i < n; i++) {
    //     if(i != idx) {
    //         ans += temp[i][1];
    //     }
    // }

    // cout << ans << "\n";
        long long ans = sumSecond - minSecond + minFirst;
    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
}

// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n; cin >> n;

//     // vector<vector<int>> temp;

//     vector<int> temp2;

//     for(int i=0; i<n; i++) {
//         int m; cin >> m;
//         vector<int> a(m);
//         for(int j=0; j<m; j++) {
//             cin >> a[j];
//             temp2.push_back(a[j]);
//         }   
//     }
//         // lets sort all these arrays individually and 
//         // the max beauty will be  sum of first m maximum numbers only i
//     sort(temp2.begin(), temp2.end());
//     long long ans = 0;

//     for(int i=0; i<n; i++ ){
//         cout << temp2[i] << " " ;
//         ans += temp2[i];
//     }
//     cout << "\n";
//     // cout << ans << "\n";

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