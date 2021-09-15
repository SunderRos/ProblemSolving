#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	vector<int> L(100000);
	vector<int> R(100000);
	int answer = 0;
	for(int i = 0; i < n; i++){
		cin >> L[i] >> R[i];
		answer += R[i] - L[i] + 1;
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}