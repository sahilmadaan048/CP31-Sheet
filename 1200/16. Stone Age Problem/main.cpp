// https://codeforces.com/contest/1679/problems




// ---------------------------- c --------------------------



#include <bits/stdc++.h>
using namespace std;

struct FenwickTree {
    vector<int> bit;  // binary indexed tree
    int n;

    FenwickTree(int n) {
        this->n = n;
        bit.assign(n, 0);
    }

    FenwickTree(vector<int> a) : FenwickTree(a.size()) {
        for (size_t i = 0; i < a.size(); i++)
            add(i, a[i]);
    }

    int sum(int r) {
        int ret = 0;
        for (; r >= 0; r = (r & (r + 1)) - 1)
            ret += bit[r];
        return ret;
    }

    int sum(int l, int r) {
        return sum(r) - sum(l - 1);
    }

    void add(int idx, int delta) {
        for (; idx < n; idx = idx | (idx + 1))
            bit[idx] += delta;
    }
};

signed main() {

    cin.tie(NULL)->sync_with_stdio(false);

    int n, q;
    cin >> n >> q;

    FenwickTree x = FenwickTree(n+1);
    FenwickTree y = FenwickTree(n+1);

    vector<int> xx(n+1), yy(n+1);

    while(q--)
    {
        int t;
        cin >> t;

        if(t == 1)
        {
            int a, b;
            cin >> a >> b;

            xx[a]++;
            yy[b]++;

            if(xx[a] == 1)x.add(a, 1);
            if(yy[b] == 1)y.add(b, 1);
        }
        else if(t == 2)
        {
            int a, b;
            cin >> a >> b;

            xx[a]--;
            yy[b]--;

            if(xx[a]==0)x.add(a, -1);
            if(yy[b]==0)y.add(b, -1);
        }
        else
        {
            int x1, x2, y1, y2;
            cin >> x1 >> y1 >> x2 >> y2;

            if(x.sum(x1, x2) == x2-x1+1 || y.sum(y1, y2) == y2-y1+1)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }
}// Author - sahilmadaan048

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
//     int n, q; cin >> n >> q;

//     while(q--) {
//         int t; cin >> t;

//         bool flag = true;

//         if(t == 1) {
//             int x, y; cin >> x >> y;
//         }
//         else if (t == 2) {
//             int x, y; cin >> x >> y;
//         }
//         else {

//         }

//         if(flag) {
//             cout << "YES\n";
//         }
//         else {
//             cout << "NO\n";
//         }
//     }
// }

// int32_t main()
// {
 
//  ios_base::sync_with_stdio(false);
//  cin.tie(NULL);

//     int T=1;
//     while (T--)
//     {
//         solve();
//     }
//     return 0;
// }



// ---------------------------- b --------------------------


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
//     int n, q;
//     cin >> n >> q;

//     vector<int> a(n);
//     vector<bool> vis(n, true);

//     int sum = 0;
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//         sum += a[i];
//     }

//     int all = 0;

//     while(q--){
//         int t;
//         cin >> t;

//         if(t == 1){
//             int i, x;
//             cin >> i >> x;
//             i--;

//             int cur = vis[i] ? a[i] : all;

//             sum -= cur;
//             sum += x;

//             a[i] = x;
//             vis[i] = true;
//         }
//         else{
//             int x;
//             cin >> x;

//             all = x;
//             sum = x * n;

//             fill(vis.begin(), vis.end(), false);
//         }

//         cout << sum << "\n";
//     }
// }

// int32_t main()
// {

//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

//    int T=1;
//    while (T--)
//    {
//     solve();
// }
// return 0;
// }




// ------------------------------ a ------------------------------------

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
// #define ll long long
 
// void solve() {
//     ll n; cin >> n;
//     if(n%2 || n<4) {
//         cout << -1 << "\n";
//         return;
//     }
//     ll min, max;
//     ll a = n/4;
//     ll b = n/6;
 
//     max = a;
//     if(n%6 == 0) min = b;
//     else {
//         if(n%6==4) min = b+1;
//         else if(n%6==2) min = ((n-4)/6)+2;
//     }
//     cout << min <<  " " << max << '\n';
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
