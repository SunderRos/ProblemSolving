#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll INF = 1e9 + 5;
ll L = 0;
ll n, m, q;
ll a[50], b[50], c[50], d[50];
void Search(vector<ll>& v){
	if(v.size() == n){
		ll answer = 0;
		for(ll i = 0; i < q; i++){
			if(v[b[i]] - v[a[i]] == c[i]) answer += d[i];
		}
		L = max(L, answer);
		return;
	}
	int st = 1;
	if(v.size())st = v.back();
	for(ll i = st; i <= m; i++){
		v.push_back(i);
		Search(v);
		v.pop_back();
	}
}

void solve(){

	cin >> n >> m >> q;
	for(ll i = 0; i < q; i++){
		cin >> a[i] >> b[i] >> c[i] >> d[i];
		a[i]--, b[i]--;
	}
	vector<ll> v;
	Search(v);
	cout << L;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}