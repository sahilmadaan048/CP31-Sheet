// https://codeforces.com/contest/1433/problem/A
// https://codeforces.com/contest/1433/problem/B
// https://codeforces.com/contest/1433/problem/C
// https://codeforces.com/contest/1433/problem/D


// ------------ d

// Author - sahilmadaan048

#include "bits/stdc++.h"
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define fr(i,n) for(int i=0; i<(n); i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define nl cout<<"\n"
#define dbg(var) cout<<#var<<"="<<var<<" "
#define all(v) v.begin(),v.end()
#define sz(v) (int)(v.size())
#define srt(v)  sort(v.begin(),v.end())         // sort 
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// make sure to sort before applying unique // else only consecutive duplicates would be removed 
#define bin(x,y)  bitset<y>(x) 
using namespace std;
int MOD=1e9+7;      // Hardcoded, directly change from here for functions!


void modadd(int &a , int b) {a=((a%MOD)+(b%MOD))%MOD;}
void modsub(int &a , int b) {a=((a%MOD)-(b%MOD)+MOD)%MOD;}
void modmul(int &a , int b) {a=((a%MOD)*(b%MOD))%MOD;}
// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================


void solve() {
    int n;
    cin >> n;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    bool same = true;
    for (int i = 2; i <= n; i++) {
        if (a[i] != a[1]) {
            same = false;
            break;
        }
    }

    if (same) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

    int other = -1;

    for (int i = 2; i <= n; i++) {
        if (a[i] != a[1]) {
            cout << 1 << " " << i << "\n";
            if (other == -1) other = i;
        }
    }

    for (int i = 2; i <= n; i++) {
        if (a[i] == a[1]) {
            cout << other << " " << i << "\n";
        }
    }
}


int32_t main()
{
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int T; cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}




// ------------ c
// Author - sahilmadaan048

// #include "bits/stdc++.h"
// #define int long long
// #define uint unsigned long long
// #define vi vector<int>
// #define vvi vector<vi >
// #define vb vector<bool>
// #define vvb vector<vb >
// #define fr(i,n) for(int i=0; i<(n); i++)
// #define rep(i,a,n) for(int i=(a); i<=(n); i++)
// #define nl cout<<"\n"
// #define dbg(var) cout<<#var<<"="<<var<<" "
// #define all(v) v.begin(),v.end()
// #define sz(v) (int)(v.size())
// #define srt(v)  sort(v.begin(),v.end())         // sort 
// #define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
// #define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
// #define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// // make sure to sort before applying unique // else only consecutive duplicates would be removed 
// #define bin(x,y)  bitset<y>(x) 
// using namespace std;
// int MOD=1e9+7;      // Hardcoded, directly change from here for functions!


// void modadd(int &a , int b) {a=((a%MOD)+(b%MOD))%MOD;}
// void modsub(int &a , int b) {a=((a%MOD)-(b%MOD)+MOD)%MOD;}
// void modmul(int &a , int b) {a=((a%MOD)*(b%MOD))%MOD;}
// // ================================== take ip/op like vector,pairs directly!==================================
// template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
// template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
// template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
// template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
// template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// // ===================================END Of the input module ==========================================


// void solve(){
//     int n; cin >> n;
//     vector<int> a(n);

//     unordered_set<int> st;
//     int maxi = -1;

//     for(int i=0; i<n; i++) {
//         cin >> a[i];
//         maxi = max(maxi, a[i]);
//         st.insert(a[i]);
//     }

//     if(st.size() == 1) {
//         cout << -1 << "\n";
//         return;
//     }

//     for(int i=0; i<n; i++) {
//         if(a[i] == maxi) {
//             if((i > 0 and a[i-1] < a[i]) or (i < n-1 and a[i+1] < a[i])) {
//                 cout << i + 1 << "\n";
//                 return;
//             }
//         }
//     }

//     cout << -1 << "\n";
// }

// int32_t main()
// {
 
//  ios_base::sync_with_stdio(false);
//  cin.tie(NULL);

//     int T; cin >> T;
//     while (T--)
//     {
//         solve();
//     }
//     return 0;
// }



// ------------ b

// Author - sahilmadaan048

// #include "bits/stdc++.h"
// #define int long long
// #define uint unsigned long long
// #define vi vector<int>
// #define vvi vector<vi >
// #define vb vector<bool>
// #define vvb vector<vb >
// #define fr(i,n) for(int i=0; i<(n); i++)
// #define rep(i,a,n) for(int i=(a); i<=(n); i++)
// #define nl cout<<"\n"
// #define dbg(var) cout<<#var<<"="<<var<<" "
// #define all(v) v.begin(),v.end()
// #define sz(v) (int)(v.size())
// #define srt(v)  sort(v.begin(),v.end())         // sort 
// #define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
// #define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
// #define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// // make sure to sort before applying unique // else only consecutive duplicates would be removed 
// #define bin(x,y)  bitset<y>(x) 
// using namespace std;
// int MOD=1e9+7;      // Hardcoded, directly change from here for functions!


// void modadd(int &a , int b) {a=((a%MOD)+(b%MOD))%MOD;}
// void modsub(int &a , int b) {a=((a%MOD)-(b%MOD)+MOD)%MOD;}
// void modmul(int &a , int b) {a=((a%MOD)*(b%MOD))%MOD;}
// // ================================== take ip/op like vector,pairs directly!==================================
// template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
// template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
// template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
// template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
// template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// // ===================================END Of the input module ==========================================


// void solve(){
//     int n; cin >> n;
//     vector<int> a(n);

//     for(int i=0; i<n; i++) {
//         cin >> a[i];
//     }

//     vector<pair<int, int>> temp; // it will store the last index of the continuous segment of 1s for each of the semgments
//     // ans would b e the absolute diff of the inices in temp
//     int ans = 0;
//     int i = 0;  

//     int cnt = 0;

//     int last = -1;

//     while(i < n) {
//         if(a[i] ==  1) {
//             last = i;
//             cnt++;
//         }
//         else {
//             if(last != -1) {
//                 temp.push_back({last - cnt + 1, last});
//                 last = -1;
//                 cnt = 0;
//             }
//         }
//         i++;
//     }

//     if(last != -1) {
//         temp.push_back({last - cnt + 1, last});
//     }

//     for(int i=1; i<temp.size(); i++) {
//         ans += temp[i].first - temp[i-1].second - 1;
//     }
//     cout << ans << "\n";
// }

// int32_t main()
// {
 
//  ios_base::sync_with_stdio(false);
//  cin.tie(NULL);

//     int T; cin >> T;
//     while (T--)
//     {
//         solve();
//     }
//     return 0;
// }



// ------------ a

// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//         string x;
//         cin >> x;

//         int digit = x[0] - '0';
//         int len = x.length();

//         int sum = len * (len + 1) / 2;   // 1,3,6,10

//         cout << (digit - 1) * 10 + sum << endl;
//     }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t; cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }   