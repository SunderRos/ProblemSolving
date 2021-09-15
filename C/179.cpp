#include<bits/stdc++.h>
using namespace std;

void solve(){

	int64_t n;
	cin >> n;
	int64_t sum = 0;
	for(int64_t i = 1; i <= n; i++){
		sum += n / i;
		sum -= (n % i == 0);
	}
	cout << sum;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}