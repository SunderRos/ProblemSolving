#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

ll powmod(ll x,ll y){
    ll res=1;
    for(ll i=0;i<y;i++){
        res=res*x%mod;
    }
    return res;
}

void solve(){

	int n;
	cin >> n;
	ll ans = powmod(10,n)-powmod(9,n)-powmod(9,n)+powmod(8,n);
	ans %= mod;
	ans = (ans + mod) % mod;
	cout << ans;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}