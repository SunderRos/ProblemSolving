#include<bits/stdc++.h>
using namespace std;

void solve(){

	int a, b, t;
	cin >> a >> b >> t;
	cout << int(t / a) * b;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}