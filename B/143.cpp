#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	int answer = 0;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			answer += a[i]*a[j];
		}
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}