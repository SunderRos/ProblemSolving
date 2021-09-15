#include<bits/stdc++.h>
using namespace std;

int64_t Square(int64_t n){
	return n * n;
}

void solve(){

	int n;
	cin >> n;
	vector<int64_t> a(n + 1);
	vector<int64_t> dp(n + 1, 0);
	int64_t sum = 0;
	for(int i = 0; i < n; i++) cin >> a[i], sum += a[i];
	int64_t sos = 0;
	for(int i = 0; i < n; i++){
		sos += Square(a[i]);
	}
	cout << n*sos - Square(sum);
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}