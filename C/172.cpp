#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n, m, k;
	cin >> n >> m >> k;
	vector<int64_t> A(n);
	vector<int64_t> B(m);
	for(int i = 0; i < n; i++)
		cin >> A[i];
	for(int i = 0; i < m; i++)
		cin >> B[i];
	int64_t t = 0;
	for(int i = 0; i < m; i++){
		t += B[i];
	}
	int j = m;
	int answer = 0;
	for(int i = 0; i < n + 1; i++){
		while(j > 0 && t > k){
			--j;
			t -= B[j];
		}
		if(t > k){
			break;
		}
		answer = max(answer, i + j);
		if(i == n){
			break;
		}
		t += A[i];
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}