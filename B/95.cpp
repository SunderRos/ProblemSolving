#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n, x;
	cin >> n >> x;
	vector<int> A(n);
	int sum = 0, M = 1e9 + 7;
	for(auto &a : A){
		cin >> a;
		sum += a;
		if(a < M){
			M = a;
		}
	}

	cout << n + (x - sum) / M;

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}