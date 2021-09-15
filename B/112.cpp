#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 5;

void min_self(int& a, int b){
	a = min(a, b);
}

void solve(){

	int n, T;
	cin >> n >> T;
	int answer = INF;
	for(int i = 0; i < n; i++){
		int cost, time;
		cin >> cost >> time;
		if(time < T && cost < answer){
			answer = cost;
		}
	}
	if(answer == INF){
		cout << "TLE";
	}else{
		cout << answer;
	}	
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}