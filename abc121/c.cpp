#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5 + 5;
int64_t a[mxN],b[mxN], dp[mxN];
void solve(){

	int n, m;
	cin >> n >> m;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		v.emplace_back(a[i], b[i]);
	}
	sort(v.begin(), v.end());
	int count = 0;
	int64_t answer = 0;
	for (int i = 0; i < n; i++) {
		while(v[i].second != 0) {
			v[i].second--;
			count++;
			answer += v[i].first;
			if(count == m) {
				cout << answer;
				return;
			}
		}
	}

}

int main(){
   ios::sync_with_stdio(0);
   cin.tie(nullptr);
   solve();
}
