#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	vector<string> s(n);
	for(int i = 0; i < n; i++){
		cin >> s[i];
	}

	unordered_set<string> u;
	for(int i = 0; i < n; i++){
		u.insert(s[i]);
	}

	for(auto &k : u){
		if(u.count('!' + k)){
			cout << k;
			return;
		}
	}
	cout << "satisfiable";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}