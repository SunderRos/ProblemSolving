#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n, m;
	cin >> n >> m;
	const int nmax = 50;
	vector<string> A(n);
	vector<string> B(m);
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	for(int i = 0; i < m; i++){
		cin >> B[i];
	}
	bool exist = false;
	for(int li = 0; li < n; li++){
		for(int lj = 0; lj < n; lj++){
			if(li + m - 1 >= n || lj + m - 1 >= n){
				continue;
			}
			bool match = true;
			for(int i = 0; i < m; i++){
				for(int j = 0; j < m; j++){
					if(A[li + i][lj + j] != B[i][j]){
						match = false;
					}
				}
			}
			if(match){
				exist = true;
			}
		}
	}

	cout << (exist ? "Yes" : "No");
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}