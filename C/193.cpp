#include<bits/stdc++.h>
using namespace std;


void solve(){

	int64_t n;
	cin >> n;
	unordered_set<int64_t> s;
	for(int i = 2; i * i <= n; i++){
		int x = i * i;
		while(x <= n){
			s.insert(x);
			x *= i;
		}
	}
	cout << n - s.size();
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}