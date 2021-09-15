#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
const int mxN = 1e5;
void solve(){

	int n, m, x;
	cin >> n >> m;
	int a[mxN + 1], dp[mxN + 1];
	memset(dp, 0, sizeof(dp));
	for (int i = 1; i <= m; i++){
		cin >> x;
		a[x] = 1;
	}
	dp[0] = 1;
	for (int i = 1; i <= n; i++){
		dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
		if(a[i])
			dp[i] = 0;
	}
	cout << dp[n];
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
