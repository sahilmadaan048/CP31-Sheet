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


void solve(){
   int n; cin >> n ;
   vector<int> a(n);

   vector<int> p(n);

   p[n-1] = n;

   for(int i=0; i<n; i++) {
      cin >> a[i];
   }  

   for(int i=n-2; i>=0; i--) {
      p[i] = (a[i] == a[i+1]) ? p[i+1] : i+1;
   }

   int q; cin >> q;

   while(q--) {
      int l, r; cin >> l >> r;
      l--;
      // r--;

      if(p[l] < r) {
         cout << l + 1 << " " << p[l+1] << "\n";
      }
      else {
         cout << -1 << " " << -1 << "\n";
      }
   }

   return;
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


// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n, m, k;
//     cin >> n >> m >> k;

//     vector<int> a(n), b(m);
//     for (int &x : a) cin >> x;
//     for (int &x : b) cin >> x;

//     vector<int> cnt(k + 1, 0);

//     for (int e : a) {
//         if (e <= k) {
//             cnt[e] |= 1;
//         }
//     }

//     for (int e : b) {
//         if (e <= k) {
//             cnt[e] |= 2;
//         }
//     }

//     vector<int> c(4, 0);
//     for (int e : cnt) {
//         c[e]++;
//     }

//     if (c[1] > k / 2 || c[2] > k / 2 || c[1] + c[2] + c[3] != k) {
//         cout << "NO\n";
//     } else {
//         cout << "YES\n";
//     }
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> a[i];
//     }
    
//     vector<int> cnt(26, 0);
//     string s = "";
    
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < 26; ++j) { 
//             if (cnt[j] == a[i]) {
//                 cnt[j]++;
//                 s += char(97 + j);
//                 break;
//             }
//         }
//     }
    
//     cout << s << "\n";
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

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
//   int n;
//   cin >> n;
//   string str;
//   cin >> str;

//   deque<char> s(str.begin(), str.end());


//   while (!s.empty() && s.front() == 'W') {
//     s.pop_front();
//  }
 

//  while (!s.empty() && s.back() == 'W') {
//     s.pop_back();
//  }
 
//  cout << s.size() << '\n';
// }

// int32_t main()
// {

//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);

//   int T; cin >> T;
//   while (T--)
//   {
//     solve();
//  }
//  return 0;
// }
