#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n, k;
	cin >> n >> k;
	double p = 0;
	for (int i = 1; i <= n; i++) {
		double temp = 1.0 / n;
		int now = i;
		while (now < k) {
			now *= 2;
			temp /= 2;
		}
		p += temp;
	}
	cout << fixed << setprecision(12) << p;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}