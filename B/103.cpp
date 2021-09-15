#include<bits/stdc++.h>
using namespace std;

void solve(){

	string s, t;
	cin >> s >> t;
	int k = 0;

	if(s == t){
		cout << "Yes";
		return;
	}

	for(int i = 0; i < s.length(); i++){
		s = s[s.length() - 1] + s.substr(0, s.length() - 1);
		if(s == t){
			k++;
		}
	}

	if(k != 0){
		cout << "Yes";
	}else{
		cout << "No";
	}


}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}