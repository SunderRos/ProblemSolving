#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	vector<int> A(n);
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	int answer = 0;
	int maxNum = 0;
	for(int i = 0; i < n; i++){
		maxNum = max(maxNum, A[i]);
		int Bi = maxNum;
		answer += Bi - A[i];
		cout << Bi << ' ';
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}