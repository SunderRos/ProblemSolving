#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	long long answer = 0;
	map<string, int> freq;
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		answer += (freq[s]++);
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}