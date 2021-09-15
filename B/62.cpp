#include<bits/stdc++.h>
using namespace std;

void solve(){

	int r, c;
	cin >> r >> c;

	char a[100][101],b[102][102];

	for(int i = 0; i < r; i++){
		cin >> a[i];
	}

	for(int i = 0; i < r + 2; i++){
		for(int j = 0; j < c + 2; j++){
			b[i][j] = '#';
		}
	}

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			b[i + 1][j + 1] = a[i][j];
		}
	}

	for (int i = 0; i < r + 2; i++) {
		for (int j = 0; j < c + 2; j++){
			cout << b[i][j];
		}
		cout << '\n';
	}


}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}