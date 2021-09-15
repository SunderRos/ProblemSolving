#include<bits/stdc++.h>
using namespace std;

void solve(){

	string s;
	cin >> s;
	int count = 0;
	int answer = 0;
	for (int i = 0; i < int(s.length()); i++) {
		if(s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T') {
			count++;
		}else if(s[i + 1] != 'A' || s[i + 1] != 'C' || s[i + 1] != 'G' || s[i + 1] != 'T'){
			count = 0;
		}
		answer = max(answer, count);
	}

	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}