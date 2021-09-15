#include<bits/stdc++.h>
using namespace std;

void solve(){

	string s;
	cin >> s;
	int n = int(s.length());
	int answer = 1e9 + 5;
	for (int j = 0; j < 2; j++) {
		int count = 0;
		for (int i = 0; i < n; i++) {
			if(s[i] != '0' + (i + j) % 2) {
				count++;
			}
		}
		answer = min(answer, count);
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}