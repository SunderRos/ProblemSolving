#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n, k;
	cin >> n >> k;
	vector<int> X(n);

	for(auto &x : X){
		cin >> x;
	}
	int answer = 0;
	for(int i = 0; i < n; i++){
		if((k + 1) / 2 <= X[i]){
			answer += (k - X[i])*2;
		}else{
			answer += X[i]*2;
		}
	}

	cout << answer;

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
