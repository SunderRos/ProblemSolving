#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 5;

void solve(){

	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	int answer = INF;
	for(int i = 0; i < 1 << (n - 1); i++){
		int ored = 0;
		int xored = 0;
		for(int j = 0; j <= n; j++){
			if(j < n) ored |= a[j];
			if(j == n || (i >> j & 1)) xored ^= ored, ored = 0;
		}
		answer = min(answer, xored);
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}