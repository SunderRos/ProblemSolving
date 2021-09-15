#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	int A[200010];
	int answer[200010];
	for(int i = 2; i <= n; i++){
		cin >> A[i];
		answer[A[i]]++;
	}
	for(int i = 1; i <= n; i++){
		cout << answer[i] << '\n';
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}