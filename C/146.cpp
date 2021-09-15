#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int d(ll x){
	int count = 0;
	while(x != 0){
		count++;
		x /= 10;
	}
	return count;
}

void solve(){

	ll a, b, x;
	cin >> a >> b >> x;
	ll low = 0;
	ll high = 1e9 + 1;
	while(high - low > 1){
		ll mid = low + (high - low) / 2;
		ll c = a * mid + b*d(mid);
		(c <= x ? low : high) = mid;
	}
	cout << low;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}