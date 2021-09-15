#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	vector<int> x(3);
	cin >> n >> x[0] >> x[1] >> x[2];
	vector<int> l(n);
	for (int i = 0; i < n; i++)
		cin >> l[i];

	int answer = 1e9 + 5;

	for (int mask = 0; mask < (1 << (2*n)); mask++) {
		int tmp = 0;
		vector<int> s(3);
		int m = mask;
		for (int i = 0; i < n; i++) {
			int k = (m & 3);
			m >>= 2;
			if (k == 0) continue;
			k--;
			if(s[k] > 0) tmp += 10;
			s[k] += l[i];
		}

		for (int i = 0; i < 3; i++) {
			if(s[i] == 0) tmp = 1e9;
			tmp += abs(x[i] - s[i]);
		}
		answer = min(answer, tmp);
	} 

	cout << answer;

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}