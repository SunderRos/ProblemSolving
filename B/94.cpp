#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, m , x;
	cin >> n >> m >> x;
	vector<int> A(m);
	for(auto &a : A){
		cin >> a;
	}
	int answer = 1e9 + 7;
	int left = 0, right = 0;
	for(int i = 0; i < m; i++){
		if(A[i] > x) left++;
		else
			right++;
		
	}
	answer = min(left, right);
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}