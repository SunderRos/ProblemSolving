#include<bits/stdc++.h>
using namespace std;

extern const int MOD = 1e9;

void solve(){

	long long a, b;
	cin >> a >> b;
	a = a % MOD;
	b = b % MOD;
	if(a > b){
		cout << "GREATER";
	}else if(a == b){
		cout << "EQUAL";
	}else{
		cout << "LESS";
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}