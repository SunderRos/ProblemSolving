#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 5;

void solve(){

	int n;
	cin >> n;
	vector<int> A(n);

	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	int answer = 0;
	for(int i = 1; i < n - 1; i++){
		if(A[i - 1] < A[i] && A[i] < A[i + 1]) answer++;
		if(A[i - 1] > A[i] && A[i + 1] < A[i]) answer++;
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}