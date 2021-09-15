#include<bits/stdc++.h>
using namespace std;
using ll = long long;
template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}

void min_self(ll& a, ll b){
	a = min(a, b);
}
void solve(){

	ll L, R;
	cin >> L >> R;
	if(R - L > 10000){
		cout << 0;
		return;
	}
	ll answer = 2019;
	for(ll i = L; i < R; i++){
		for(ll j = i + 1; j <= R; j++){
			chmin(answer, i * j % 2019);
		}
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}