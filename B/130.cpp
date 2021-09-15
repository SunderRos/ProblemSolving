#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, x;
	cin >> n >> x;
	vector<int> D(n + 1);
	D[1] = 0;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		D[i + 1] = D[i] + x;
	}

	int answer = 0;
	for(int i = 0; i <= n; i++){
		if(D[i] <= x){
			answer++;
		}
	}
	cout << answer;

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}