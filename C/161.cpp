#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	ll n, k;
	cin >> n >> k;
	n %= k;
	cout << min(n, abs(n - k));
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}