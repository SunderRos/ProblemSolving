#include<bits/stdc++.h>
using namespace std;

void solve(){

	int N;
	cin >> N;
	int sum = 0;
	vector<int> T(N);
	for(auto &a : T){
		cin >> a;
		sum += a;
	}
	int M;
	cin >> M;

	vector<int> P(M);
	vector<int> X(M);
	vector<pair<int, int>> S;
	for(int i = 0; i < M; i++){
		cin >> P[i] >> X[i];
		S.push_back((make_pair(P[i], X[i])));
	}

	for(int i = 0; i < M; i++){
		int temp = sum;
		temp -= T[P[i] - 1];
		temp += S[i].second;
		cout << temp << '\n';
		temp = 0;
	}


}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}