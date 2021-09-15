#include<bits/stdc++.h>
using namespace std;

void solve(){
	set<string> s = {"she", "ewr", "ewrw"};
	for_each (s.begin(), next(s.begin(),1),[](string k){
		cout << k << ' ';
	});
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}