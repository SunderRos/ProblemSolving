#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	double answer = 0;
	for (int i = 0; i < n; i++) {
		double x;
		string u;
		cin >> x >> u;
		if(u == "BTC") {
			answer += x * 380000;
		} else {
			answer += x;
		}
	}
	cout << fixed << setprecision(5) << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}