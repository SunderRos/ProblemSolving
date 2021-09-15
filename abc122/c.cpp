#include<bits/stdc++.h>
using namespace std;


void solve(){

	int n, q;
	string s;
	cin >> n >> q >> s;
	int sum[n];

	for (int i = 0; i < n - 1; i++)
		sum[i + 1] = sum[i] + (s.substr(i, 2) == "AC");

	for (int i = 0; i < q; i++) {
		int l, r;
		cin >> l >> r;
		l--, r--;
		cout << sum[r] - sum[l] << '\n';
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}