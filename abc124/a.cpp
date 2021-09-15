#include<bits/stdc++.h>
using namespace std;

void solve(){

	int a, b;
	cin >> a >> b;
	if(a == b){
		cout << 2 * a;
		return;
	}
	cout << 2 * max(a, b) - 1;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}