#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, m;
	cin >> n >> m;
	vector<vector<int>> s(m);
	for (int i = 0; i < m; i++) {
		int k;
		cin >> k;
		s[i].resize(k);
		for (int j = 0; j < k; j++) {
			cin >> s[i][j];
			s[i][j]--;
		}
	}
	vector<int> p(m);
	for (int i = 0; i < m; i++)
		cin >> p[i];

	int answer = 0;

	for (int i = 0; i < (1 << n); i++) {
		bool ok = true;
		for (int j = 0; j < m; j++) {
			int count = 0;
			for (int v : s[j]) {
				if ((i >> v) & 1) {
					count++;
				}
			}
			count %= 2;
			if (count != p[j]) ok = false;
		}
		if (ok) {
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