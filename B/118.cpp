#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, m;
	cin >> n >> m;
	vector<int> count(m, 0);
	int answer = 0;
	for(int i = 0; i < n; i++){
		int k;
		cin >> k;
		for(int j = 0; j < k; j++){
			int a;
			cin >> a;
			a--;
			count[a]++;
		}
	}
	for(int i = 0; i < m; i++){
		if(count[i] == n){
			answer++;
		}
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}