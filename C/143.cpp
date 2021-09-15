#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){

	int n;
	string s;
	cin >> n >> s;
	int answer = 1;
	for(int i = 0; i < n - 1; i++){
		if(s[i] != s[i + 1]) answer++;
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}