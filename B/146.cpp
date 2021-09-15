#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n, x, y;
	cin >> n >> x >> y;
	int k = hypot(x, y);
	cout << (n == k ? 1 : k <= 2 ? 2 : (int) ceil(k / n));
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}