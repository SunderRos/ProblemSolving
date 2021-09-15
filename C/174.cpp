#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){

	ll k;
	cin >> k;
	if(k % 2 == 0 || k % 5 == 0){
		cout << -1;
		return;
	}
	int answer = 1;
	if(k == 7 || k == 1){
		cout << answer;
		return;
	}
	int x = 7;
	while(x){
		x = (x * 10 + 7) % k;
		answer++;
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}