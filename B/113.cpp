#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;

void solve(){

	int n, t, a;
	cin >> n >> t >> a;
	vector<int> H(n + 1);
	int answer = INF;
	int res = 0;
	int cc = 1 << 30;
	for(int i = 1; i <= n; i++){
		cin >> H[i];
		int d = t*1000 - H[i]*6 - a * 1000;
		if(d < 0) d = -d;
		if(cc > d) cc = d, res = i;
	}
	cout << res;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}