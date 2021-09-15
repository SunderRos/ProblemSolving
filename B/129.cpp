#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	vector<int> W(n);
	int answer = 1e9;
	int sum = 0;
	for(int i = 0; i < n; i++){
		cin >> W[i];
		sum += W[i];
	}
	int prefix_sum = 0;
	for(int i = 0; i < n; i++){
		prefix_sum += W[i];
		answer = min(answer, abs(prefix_sum - (sum - prefix_sum)));
	}	
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}