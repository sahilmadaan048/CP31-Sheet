// https://codeforces.com/problemset/problem/1725/B
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end(),greater<int>());
    int ans =0;int numplayers =n;
    for(int i=0; i<n; i++) {
        int cnt = d/a[i] +1;
        if(numplayers>=cnt){
            ans++;
            numplayers-=cnt;
        }
        if(numplayers<=0)break;
    }
    cout<<ans<<endl;
}

// void solve()
// {
//     int n, d; cin >> n >> d;
//     vector<int> temp(n);

//     for(int i=0; i<n; i++) {
//         cin >> temp[i];
//     }

//     sort(temp.begin(), temp.end());
//     int cnt = 0;

//     int i = 0;
//     for(int j=n-1; j >= i; j--) {
    //     int rem = temp[j] % d;
    //     int ss = temp[j] / d;
    //     int ct = 0;
    //     if(rem > 0 and (ss != 0)) {
    //         ct = temp[j] / d + 1;
    //     } 
    //     else {
    //         ct = temp[j] / d;
    //     }
    //     while(ct-- and i < j) {
    //         if(ct <= 0) break;
    //         i++;
    //     }
    //     if(i < j and ct <= 0) cnt+=1;

//         int ct = (d + temp[j] - 1) / temp[j];

//         if(i + (ct - 1) <= j) {
//             cnt++;
//             i += (ct - 1);
//         }
//     }
//     cout << cnt << "\n";
//     return;
// }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t =1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}