#include<bits/stdc++.h>
using namespace std;

void solve(){

	int H, W;
	cin >> H >> W;
	vector<string> grid(H);
	for(int i = 0; i < H; i++){
		cin >> grid[i];
	}
	int answer = 0;
	for(int i = 0; i < H - 1; i++){
		for(int j = 0; j < W - 1; j++){
			answer += (grid[i][j] == '#') ^ (grid[i][j + 1] == '#') ^ (grid[i + 1][j] == '#') ^ (grid[i + 1][j + 1] == '#');
		}
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}