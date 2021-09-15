#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	vector<int> A(n);
	int res = 1e9;

	for(auto &a : A){
		cin >> a;
	}
	for(int i = 0; i < 1 << (n - 1); i++){
		int ored = 0;
		int xored = 0;
		for(int j = 0; j <= n; j++){
			if(j < n){
				ored |= A[j];
			}
			if(j == n || i >> j & 1){
				xored ^= ored;
				ored = 0;
			}
		}

		res = min(res, xored);

	}

	cout << res;

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}