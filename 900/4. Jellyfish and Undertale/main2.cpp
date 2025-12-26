#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n = 0, a = 0, b = 0;
long long ans = 0;

void solve(){
	cin >> a >> b >> n;
	ans = b;
	for(int i = 0, x = 0 ; i < n ; i ++){
	    cin >> x;
		ans += min(a - 1, x);
	}
	printf("%lld\n", ans);
}

int T = 0;

int main(){
	scanf("%d", &T);
	for(int i = 0 ; i < T ; i ++) solve();
	return 0;
}