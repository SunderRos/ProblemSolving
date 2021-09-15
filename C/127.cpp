#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n, m;
	cin >> n >> m;
	int L = 1, R = n;
	for (int i = 0; i < m; i++) {
		int l, r;
		cin >> l >> r;
		L = max(L, l);
		R = min(R, r);
	}
	if (R < L) cout << 0;
	else {
		cout << R - L + 1;
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}