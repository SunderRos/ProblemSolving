#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll lcm (ll a, ll b) {
    return a / __gcd(a, b) * b;
}

void solve(){

	ll a, b;
	cin >> a >> b;
	cout << lcm(a, b);

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}