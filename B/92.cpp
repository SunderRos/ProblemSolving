#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, d, x;
	cin >> n >> d >> x;
	vector<int> A(n);
	for(auto &a : A){
		cin >> a;
	}
	int answer = x;
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= d; j++){
			while(j*A[i] + 1 <= d){
				answer++;
			}
		}
	}

	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}