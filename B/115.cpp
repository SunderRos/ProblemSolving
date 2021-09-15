#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> P(n);
	for(auto &a : P){
		cin >> a;
	}
	sort(P.begin(), P.end());
	int sum = 0;
	for(int i = 0; i < n - 1; i++){
		sum += P[i];
	}

	cout << sum + P[n - 1] / 2;

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}