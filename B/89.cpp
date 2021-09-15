#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<char> A(n);
	set<char> S;
	for(auto &a : A){
		cin >> a;
		S.insert(a);
	}
	if(S.size() == 1){
		cout << "One";
	}else if(S.size() == 2){
		cout << "Two";
	}else if(S.size() == 3){
		cout << "Three";
	}else{
		cout << "Four";
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); solve();
}