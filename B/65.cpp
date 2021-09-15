#include<bits/stdc++.h>
using namespace std;

void solve(){

	int N;
	cin >> N;
	vector<int> A(N);
	int count = 0;
	for(int i = 0; i < N; i++){
		cin >> A[i];
		A[i]--;
	}
	vector<bool> possible(N, false);
	int i = 0;
	possible[i] = true;
	while(true){
		i = A[i];
		count++;
		if(i == 1){
			cout << count;
			return;
		}
		if(possible[i]){
			cout << -1;
			return;
		}
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}