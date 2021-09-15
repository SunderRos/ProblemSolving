#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	int answer = 0;
	vector<int> A(n);
	for(auto &a : A){
		cin >> a;
	}
	sort(A.rbegin(), A.rend());
	for(int i = 0; i < n; i = i + 2){
		answer += A[i];
	}
	for(int i = 1; i < n; i = i + 2){
		answer -= A[i];
	}	
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}