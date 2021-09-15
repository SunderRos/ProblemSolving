#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9 + 5;
void solve(){
	int n;
	cin >> n;
	vector<int> X(n);
	for(int i = 0; i < n; i++){
		cin >> X[i];
	}
	ll answer = INF;
	for(ll i = 0; i <= 100; i++){
		ll	sum = 0;
		for(int j = 0; j < n; j++){
			sum += (X[j] - i) * (X[j] - i);
		}
		answer = min(answer, sum);
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}