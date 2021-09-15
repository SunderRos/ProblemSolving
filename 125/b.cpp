#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	vector<int> x(n), y(n);
	for (int i = 0; i < n; i++)
		cin >> x[i];
	for (int i = 0; i < n; i++)
		cin >> y[i];
	int sumX = 0, sumY = 0;
	for (int i = 0; i < n; i++){
		if(x[i] >= y[i]) {
			sumX += x[i];
			sumY += y[i];
		}
	}
	cout << sumX - sumY;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}