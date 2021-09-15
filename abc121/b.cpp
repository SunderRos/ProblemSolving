#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n, m, c;
	cin >> n >> m >> c;

	vector<int> b(m);
	vector<vector<int>> a(n, vector<int> (m));

	for (int i = 0; i < m; i++)
		cin >> b[i];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) 
			cin >> a[i][j];
	}
	vector<int> sum(n, 0);
	int count = 0;
	for (int i = 0; i < n; i++) {
		bool ok = true;
		for (int j = 0; j < m; j++) {
			sum[i] += a[i][j] * b[j];
		}
		if(sum[i] + c <= 0) ok = false;
		if(ok) count++;
	}
	cout << count;
}

int main(){
   ios::sync_with_stdio(0);
   cin.tie(nullptr);
   solve();
}
