#include<bits/stdc++.h>
using namespace std;

void solve(){

	int N, K;
	cin >> N >> K;
	int sum = 0;
	vector<int> L(N);

	for(auto &l : L){
		cin >> l;
	}

	sort(L.rbegin(), L.rend());

	for(int i = 0; i < K; i++){
		sum += L[i];
	}

	cout << sum;

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}