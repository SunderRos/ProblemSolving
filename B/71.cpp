#include<bits/stdc++.h>
using namespace std;

void solve(){

	string s;
	cin >> s;

	vector<int> v(26, 0);

	for(int i = 0; i < s.size(); i++){
		v[s[i] - 'a']++;
	}

	for(int i = 0; i < 26; i++){
		if(v[i] == 0){
			cout << char('a' + i) << '\n';
			return;
		}
	}

	cout << "None";

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}