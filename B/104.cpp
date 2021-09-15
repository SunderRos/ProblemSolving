#include<bits/stdc++.h>
using namespace std;

void solve(){

	string s;
	cin >> s;
	string ans = "AC";
	int l = s.length();
	if(s[0] != 'A'){
		ans = "WA";
	}
	int cnt = 0;
	for(int i = 1; i < l; i++){
		if(isupper(s[i])){
			if(i == 1 || i == l - 1 || s[i] != 'C'){
				ans = "WA";
			}
			cnt++;
		}
	}
	if(cnt != 1){
		ans = "WA";
	}

	cout << ans;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
