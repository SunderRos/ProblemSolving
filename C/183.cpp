#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n, k;
	cin >> n >> k;
	vector<vector<int>> T(n, vector<int> (n));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> T[i][j];
		}
	}
	vector<int> index;

	for(int i = 0; i < n; i++){
		index.push_back(i);
	}

	int answer = 0;
	do {	
		int time = 0;
		for(int i = 0; i < n; i++){
			time += T[index[i]][index[(i + 1) % n]];
		}
		if(time == k) answer++;
	} while(next_permutation(index.begin() + 1, index.end()));
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}