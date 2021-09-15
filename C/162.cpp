#include<bits/stdc++.h>
using namespace std;

void solve(){

	int k;
	cin >> k;
	long long sum = 0;
	for(int i = 1; i <= k; i++){
		for(int j = 1; j <= k; j++){
			for(int l = 1; l <= k; l++){
				sum += __gcd(i, __gcd(j, l));
			}
		}
	}
	cout << sum;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}