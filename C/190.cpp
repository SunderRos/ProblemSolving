#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n, m;
	cin >> n >> m;
	vector<pair<int, int>> cond(m);
	for(auto& [a, b] : cond){
		cin >> a >> b;
	}
	int k;
	cin >> k;
	vector<pair<int, int>> choice(k);
	for(auto& [c, d] : choice){
		cin >> c >> d;
	}
	int answer = 0;
	for(int i = 0; i < (1 << k); i++){
		vector<bool> ball(n);
		for(int j = 0; j < k; j++){
			const auto [c, d] = choice[j];
			ball[i & (1 << j) ? c : d] = 1;
		}
		int count = 0;
		for(auto& [a, b] : cond){
			if(ball[a] && ball[b]) count++;
		}
		if(answer < count) answer = count;
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}