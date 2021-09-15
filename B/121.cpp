#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n, m, c;
	cin >> n >> m >> c;
	int B[m];
	int A[n + 1][m + 1];
	for(int i = 0; i < m; i++){
		cin >> B[i];
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> A[i][j];
		}
	}
	int count = 0;
	for(int i = 0; i < n; i++){
		int sum = 0;
		for(int j = 0; j < m; j++){
			sum += A[i][j]*B[j];
		}
		if(sum + c > 0){
			count++;
		}
	}

	cout << count;

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}