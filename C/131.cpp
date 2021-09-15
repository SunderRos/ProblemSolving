#include<bits/stdc++.h>
using namespace std;

void solve(){

	int64_t a, b, c, d;
	cin >> a >> b >> c >> d;
	int64_t e = c * d / __gcd(c, d);
	auto fn = [&](int64_t x) {
		return x - x / c - x / d + x / e;
	};
	cout << fn(b) - fn(a - 1);
}

int main(){
	ios::sync_with_stdio(0);k
	cin.tie(0);
	solve();
}