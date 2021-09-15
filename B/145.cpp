#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	string s;
	cin >> s;
	if(n == 1){
		cout << "No";
		return;
	}
	if(s.substr(0, n / 2) != s.substr(n / 2, (n + 1) / 2)){
		cout << "No";
	}else{
		cout << "Yes";
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}