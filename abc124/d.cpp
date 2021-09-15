#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n, k;
	string s;
	vector<pair<char, int>> v;
	cin >> n >> k >> s;

	for (int i = 0; i < n; i++) {
		if (v.empty() || v.back().first != s[i]) {
			v.emplace_back(s[i], 1);
		} else {
			v.back().second++;
		}
	}

	int answer = 0;
	int current = 0;
	int nk = 0;
	int ta = 0;

	for (int i = 0; i < n; i++) {
		current += v[i].second;
		if (v[i].first == '0') {
			nk++;
			if (nk > k) {
				while (true) {
					current -= v[ta].second;
					ta++;
					if (v[ta - 1].first == '0') {
						break;
					}
				}
			}
		}
		answer = max(answer, current);
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}