#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	vector<string> S(n);
	for(int i = 0; i < n; i++){
		cin >> S[i];
	}
	unordered_set<string> H(S.begin(), S.end());
	for(auto &s : H){
		if(H.count('!' + s)){
			cout << s;
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