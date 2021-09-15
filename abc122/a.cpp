#include<bits/stdc++.h>
using namespace std;

void solve(){
	char b;
	cin >> b;
	if (b == 'A') {
		cout << 'T';
	}else if(b == 'T') {
		cout << 'A';
	}else if(b == 'C') {
		cout << 'G';
	}else {
		cout << 'C';
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
