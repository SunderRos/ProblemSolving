#include<bits/stdc++.h>
using namespace std;

void solve(){

	string s;
	cin >> s;
	int n = (int) s.length();
	bool flag1 = true;
	bool flag2 = true;
	for(int i = 0; i < n; i++){
		if(i % 2 == 0 && (s[i] == 'L')) flag1 = false;
		if(i % 2 != 0 && (s[i] == 'R')) flag2 = false;
	}
	cout << ((flag1 && flag2) ? "Yes" : "No");
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}