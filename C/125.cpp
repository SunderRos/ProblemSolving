#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	vector<long long> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	vector<long long> b(n), c(n);
	b[0] = a[0], c[n - 1] = a[n - 1];

	for (int i = 1; i < n - 1; i++)
		b[i] = __gcd(b[i - 1], a[i]);
	for (int i = n - 1; i >= 0; i--)
		c[i] = __gcd(c[i + 1], a[i]);

	long long answer = max(b[n - 2], c[1]);
	for (int i = 1; i < n - 1; i++) {
		answer = max(answer, __gcd(b[i - 1], c[i + 1]));
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}