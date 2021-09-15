#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){

	ll n, k;
	cin >> n >> k;
	vector<ll> h(n);
	for(ll i = 0; i < n; i++){
		cin >> h[i];
	}
	sort(h.begin(), h.end());
	int i = 0;
	while(k--){
		h.pop_back();
		if(h.empty()){
			break;
		}
	}
	ll answer = 0;
	for(auto a : h){
		answer += a;
	}
	if(!h.empty()){
		cout << answer;
		return;
	}
	cout << 0;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}