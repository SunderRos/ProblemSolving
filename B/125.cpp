#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	vector<int> V(n);
	vector<int> C(n);

	for(auto &v : V){
		cin >> v;
	}
	for(auto &c : C){
		cin >> c;
	}

	int answer = 0;
	int x = 0, y = 0;
	for(int i = 0; i < n; i++){
		if(V[i] >= C[i]){
			x += V[i];
			y += C[i];
		}
	}
	answer = max(answer, x - y);
	cout << answer;

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}