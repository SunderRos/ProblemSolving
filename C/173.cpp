#include<bits/stdc++.h>
using namespace std;
void solve(){

	int r, c, k;
	cin >> r >> c >> k;
	char C[9][9];
	for(int i = 0; i < r; i++){
		cin >> C[i];
	}
	int answer = 0;
	for(int i = 0; i < (1 << r); i++){
		for(int j = 0; j < (1 << c); j++){
			int count = 0;
			for(int l = 0; l < r; l++){
				for(int k = 0; k < c; k++){
					if(C[l][k] == '#' && ((i >> l) & 1) == 0 && ((j >> k) & 1) == 0) count++;
				}
			}
			if(count == k) answer++;
		}
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}