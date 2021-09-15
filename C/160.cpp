#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 5;

void solve(){

	int k, n;
	cin >> k >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	int answer = INF;
	for(int i = 0; i < n; i++){
		int l = v[i];
		int r = v[(i + n - 1) % n];
		if(l > r) r += k;
		answer = min(answer, r - l);
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}