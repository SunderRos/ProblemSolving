#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int answer = 0;
	int x;
	for(int l = 0; l < n; l++){
		x = a[l];
		for(int r = l; r < n; r++){
			x = min(x, a[r]);
			answer = max(answer, x * (r - l + 1));
		}
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}