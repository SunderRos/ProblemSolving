#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){

	int N;
	cin >> N;
	vector<ll> A(N + 1);
	vector<ll> B(N);
	for(int i = 0; i <= N; i++){
		cin >> A[i];
	}
	for(int i = 0; i < N; i++){
		cin >> B[i];
	}
	ll answer = 0;
	for(int i = 0; i < N; i++){
		ll k = min(A[i], B[i]);
		A[i] -= k;
		B[i] -= k;
		answer += k;
		k = min(A[i + 1], B[i]);
		A[i + 1] -= k;
		B[i] -= k;
		answer += k;
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}