#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, d;
	cin >> n >> d;
	int answer = 0;
	for(int i = d + 1; i <= n + d; i += (2*d + 1)){
		answer++;
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}