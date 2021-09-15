#include<bits/stdc++.h>
using namespace std;

bool palinedrome(int64_t k){
	string s = to_string(k);
	int n = s.size();
	bool flag = false;
	string str = s;
	reverse(str.begin(), str.end());
	if(s.substr(0, n / 2) == str.substr(0, n / 2)){
		flag = true;
	}
	return flag;
}

void solve(){
	int64_t a;
	cin >> a;
	cout << palinedrome(a);
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}