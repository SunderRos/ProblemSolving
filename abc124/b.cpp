#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;

	vector<int> h(n);

	for (int i = 0; i < n; i++)
		cin >> h[i];
	int answer = 0;
	for (int i = 0; i < n; i++) {
		bool ok = true;
		for (int j = 0; j < i; j++) {
			if (h[j] > h[i]) {
				ok = false;
				break;
			}
		}
		if(ok) answer++;
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}