#include<bits/stdc++.h>
using namespace std;

void solve(){

	string s;
	cin >> s;

	set<char> S;
	for(char &k : s){
		S.insert(k);
	}

	if(S.size() == s.size()){
		cout << "yes";
	}else{
		cout << "no";
	}

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}