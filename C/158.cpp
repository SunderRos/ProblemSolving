#include<bits/stdc++.h>
using namespace std;

void solve(){

	int a, b;
	cin >> a >> b;

	for(int i = 1; i <= 1e4; i++){
		int a1 = i * 8 / 100, b1 = i * 10 / 100;
		if(a == a1 && b == b1){
			cout << i;
			return;
		}
	}
	cout << -1;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}