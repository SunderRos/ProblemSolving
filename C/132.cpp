#include<bits/stdc++.h>
using namespace std;

void solve(){

	int N;
	cin >> N;
	vector<int> d(N);

	for (int i = 0; i < N; i++){
		cin >> d[i];
	}
	sort(d.begin(), d.end());

	int answer = d[N / 2] - d[N / 2 - 1];
	cout << d[N / 2] << '\n';
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}