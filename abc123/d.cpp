#include<bits/stdc++.h>
using namespace std;

void solve(){

	int x, y, z, k;
	cin >> x >> y >> z >> k;

	vector<int64_t> A(x), B(y), C(z);

	for (int i = 0; i < x; i++) cin >> A[i];
	for (int i = 0; i < y; i++) cin >> B[i];
	for (int i = 0; i < z; i++) cin >> C[i];

	sort(C.rbegin(), C.rend());

	priority_queue<pair<int64_t, int>> pairs;

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			pairs.push({A[i] + B[j] + C[0], 0});
		}
	}

	for (int i = 0; i < k; i++) {

		auto top = pairs.top();
		pairs.pop();
		cout << top.first << '\n';
		if(top.second == z - 1) {
			continue;
		}
		pairs.push({top.first - C[top.second] + C[top.second + 1], top.second + 1});
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}