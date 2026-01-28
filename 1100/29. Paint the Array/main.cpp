// Author - sahilmadaan048
// https://codeforces.com/problemset/problem/1618/C

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
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }


    long long g1 = 0, g2 = 0;

    // gcd of odd positions (1-based) → indices 0,2,4,...
    for (int i = 0; i < n; i += 2) {
        g1 = gcd(g1, a[i]);
    }

    // gcd of even positions (1-based) → indices 1,3,5,...
    for (int i = 1; i < n; i += 2) {
        g2 = gcd(g2, a[i]);
    }

    bool ok1 = true;
    // check g1 does NOT divide any even-position element
    for (int i = 1; i < n; i += 2) {
        if (a[i] % g1 == 0) {
            ok1 = false;
            break;
        }
    }

    if (ok1) {
        cout << g1 << "\n";
        return;
    }

    bool ok2 = true;
    // check g2 does NOT divide any odd-position element
    for (int i = 0; i < n; i += 2) {
        if (a[i] % g2 == 0) {
            ok2 = false;
            break;
        }
    }

    if (ok2) {
        cout << g2 << "\n";
    } else {
        cout << 0 << "\n";
    }
}

int32_t main()
{

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int T ; cin >> T;
   while (T--)
   {
    solve();
}
return 0;
}
