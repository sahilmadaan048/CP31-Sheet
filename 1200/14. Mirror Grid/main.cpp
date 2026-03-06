// Author - sahilmadaan048
// a- https://codeforces.com/contest/1703/problem/A
// b- https://codeforces.com/contest/1703/problem/B
// c- https://codeforces.com/contest/1703/problem/C
// d- https://codeforces.com/contest/1703/problem/D
// e- https://codeforces.com/problemset/problem/1703/E
// f- https://codeforces.com/problemset/problem/1703/F
// g- https://codeforces.com/problemset/problem/1703/G


// -------------------------------- G -------------------------------

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

int n, k;
vector<int> a;
vector<vector<int>> dp;


int rec(int ind, int bad) {
    // base condition 

    if(ind == n) return 0;

    if(bad > 31) return 0;

    if(dp[ind][bad] != -1) return dp[ind][bad];

    int val = a[ind] >> bad;

    int good = val - k + rec(ind + 1, bad);

    int bad_key = (a[ind] >> (bad + 1)) + rec(ind + 1, bad + 1);

    return dp[ind][bad] = max(good, bad_key);
}

void solve() {

    /*

        dp[index][bad_used] =>

        maximum coins we can collect starting from index
        when we have already used bad_used bad keys

        we will need to use dp since at every step we have 2 choices 
        either we use a good key or we use a bad key

    */

    // lets do memoisation first

    cin >> n >> k;

    a.resize(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    dp.assign(n, vector<int>(35, -1));

    cout << rec(0,0) << "\n";
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




// --------------------------------- F -------------------------------

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


// void solve() {
//     int n; 
//     cin >> n;

//     vector<int> a(n+1);
//     for(int i = 1; i <= n; i++) cin >> a[i];

//     int ans = 0;
//     vector<int> good;

//     for(int j = 1; j <= n; j++) {

//         if(a[j] < j) {
//             ans += lower_bound(good.begin(), good.end(), a[j]) - good.begin();
//             good.push_back(j);
//         }
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



// ---------------------------------- E ---------------------------------

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
//    int n;
//    cin >> n;

//    vector<string> g(n);
//    for(int i = 0; i < n; i++) cin >> g[i];

//     int ans = 0;

// for(int i = 0; i < n/2; i++) {
//     for(int j = 0; j < (n+1)/2; j++) {

//         int a = g[i][j] - '0';
//         int b = g[j][n-1-i] - '0';
//         int c = g[n-1-i][n-1-j] - '0';
//         int d = g[n-1-j][i] - '0';

//         int ones = a + b + c + d;
//         ans += min(ones, 4 - ones);
//     }
// }

// cout << ans << "\n";
// }

// int32_t main()
// {

//  ios_base::sync_with_stdio(false);
//  cin.tie(NULL);

//  int T; cin >> T;
//  while (T--)
//  {
//     solve();
// }
// return 0;
// }



// ---------------------------------- D ---------------------------------

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

// bool check(string &s, vector<string> & temp, set<string>& st) {
//     int n = temp.size();

//     // in the vector 
//     // cjeck is it is possible to find sj and sk 
//     // such that s  == sj + sk (j can be equal to k also )

//     bool flag = false;

//     for(int len=1; len<s.size(); len++) {
//         string sj = s.substr(0, len);
//         string sk = s.substr(len);

//         if(st.find(sj) != st.end() and st.find(sk) != st.end()) {
//             flag = true;
//             break;
//         }
//     }

//     return flag;
// }


// void solve(){
//     int n; cin >> n;

//     vector<string> temp;

//     set<string> st;

//     for(int i=0; i<n; i++) {
//         string s; cin >> s;
//         temp.push_back(s);
//         st.insert(s);
//     }

//     int uq = st.size();

//     string ans = "";

//     for(int i=0; i<n; i++) {
//         if(check(temp[i], temp, st)) {
//             ans += '1';
//         } else {
//             ans += '0';
//         }
//     }

//     cout << ans << "\n";

//     return;
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



// ----------------------------------- C -------------------------------- 

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

//     vector<int> temp;
//     for(int i=0; i<n; i++) {
//         int sz; cin >> sz;
//         string s; cin >> s;

//         int val = a[i];
//         for(auto ele: s) {
//             if(ele == 'D') {
//                 val += 1;
//                 if(val == 10) val = 0;
//             } else {
//                 val -= 1;
//                 if(val == -1) val = 9;
//             }
//         }

//         temp.push_back(val);
//     }

//     for(auto ele: temp) {
//         cout << ele << " " ;
//     }
//     cout << "\n";
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


// ----------------------------------- B ---------------------------------

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
//     string s; cin >> s;

//     unordered_map<char, int> mpp;

//     int cnt = 0;
//     for(int i=0; i<n; i++) {
//         if(mpp.find(s[i]) != mpp.end()) {
//             cnt += 1;
//         }
//         else {
//             cnt += 2;
//         }
//         mpp[s[i]]++;
//     }

//     cout << cnt << "\n";
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



// ----------------------------------- A  --------------------------------

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
//     string s; cin >> s;

//     transform(s.begin(), s.end(), s.begin(), ::tolower);

//     cout << (s == "yes" ? "YES" : "NO") << "\n";
// }

// int32_t main()
// {

//  ios_base::sync_with_stdio(false);
//  cin.tie(NULL);

//     int T ; cin >> T;
//     while (T--)
//     {
//         solve();
//     }
//     return 0;
// }
