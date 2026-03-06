// Author - sahilmadaan048
// https://codeforces.com/problemset/problem/1704/C

#include "bits/stdc++.h"
#define int long long
using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;

    vector<int>a(m);
    for(int &x:a) cin>>x;

    sort(a.begin(),a.end());

    vector<int> gaps;

    for(int i=1;i<m;i++)
        gaps.push_back(a[i]-a[i-1]-1);

    gaps.push_back((n-a[m-1]) + (a[0]-1));

    sort(gaps.rbegin(),gaps.rend());

    int days=0;
    int saved=0;

    for(int g: gaps){
        int remaining = g - 2*days;

        if(remaining<=0) continue;

        if(remaining==1){
            saved +=1;
            days +=1;
        }
        else{
            saved += remaining-1;
            days +=2;
        }
    }

    cout<< n - saved << "\n";
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;
    while(T--) solve();
}