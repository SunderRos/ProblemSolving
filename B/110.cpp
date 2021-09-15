#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	vector<int> X(n);
	vector<int> Y(m);
	bool flag = false;
	for(auto &x : X){
		cin >> x;
	}
	for(auto &y : Y){
		cin >> y;
	}
	sort(X.begin(), X.end());
	sort(Y.begin(), Y.end());
	for(int i = x + 1; i <= y; i++){
		if(i > X[n - 1] && i <= Y[0]){
			flag = true;
		}
	}
	cout << (flag ? "No War" : "War");
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}