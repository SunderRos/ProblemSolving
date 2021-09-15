#include<bits/stdc++.h>
using namespace std;

void solve(){

	int64_t n;
	cin >> n;
	set<int64_t> s;
	for(int64_t i = 1; i * i <= n; i++){
		if(n % i == 0){
			s.insert(i);
			s.insert(n / i);
		}
	}
	for(auto x : s){
		cout << x << '\n';
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}