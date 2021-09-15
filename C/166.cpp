#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n, m;
	int h[100010];
	cin >> n >> m;
	for(int i = 0; i < n; i++)
		cin >> h[i];
	vector<int> answer(n, 1);
	for(int i = 0; i < m; i++){
		int l, r;
		cin >> l >> r;
		l--, r--;
		if(h[l] <= h[r]) answer[l] = 0;
		if(h[r] <= h[l]) answer[r] = 0;
	}
	cout << accumulate(answer.begin(), answer.end(), 0);
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}