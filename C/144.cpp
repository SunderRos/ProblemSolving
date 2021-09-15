#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9 + 5;
void solve(){

	ll n;
	cin >> n;
	ll answer = n - 1;
	for(ll i = 1; i <= n; i++){
		if(n % i == 0){
			answer = min(answer, i + n / i - 2);
		}
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}