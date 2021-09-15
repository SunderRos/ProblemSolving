#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	uint64_t answer = 1;
	for(int i = 1; i < 12; i++){
		answer *= (n - i);
		answer /= i;
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}