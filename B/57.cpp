#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n, m;
	cin >> n >> m;

	int64_t a[50], b[50], c[50], d[50];
	vector<int> answer(n, 0);
	for(int i = 0; i < n; i++){
		cin >> a[i] >> b[i];
	}

	for(int j = 0; j < m; j++){
		cin >> c[j] >> d[j];
	}

	for(int i = 0; i < n; i++){
		int distance = 0;
		int64_t NMAX = 1e18;

		for (int j = 0; j < m; j++) {
			distance = abs(a[i] - c[j]) + abs(b[i] - d[j]);
			if(distance < NMAX){
				NMAX = distance;
				answer[i] = j + 1;
			}
		}
	}

	for(int i = 0; i < n; i++){
		cout << answer[i] << '\n';
	}

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}