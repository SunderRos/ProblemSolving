#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a, b, k;
	cin >> a >> b >> k;
	vector<pair<int, int>> v(k);
	int ind = 1;
	for (int i = max(a, b); i >= 1; i--) {
		if(a % i == 0 && b % i == 0) {
			k--;
			if(k == 0) {
				cout << i;
				return;
			}
		}
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}