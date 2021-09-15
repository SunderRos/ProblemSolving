#include<bits/stdc++.h>
using namespace std;

void solve(){
	int N;
	cin >> N;

	vector<int> A(N);
	for(auto &a : A){
		cin >> a;
	}
	sort(A.begin(), A.end());
	cout << A[A.size() - 1] - A[0];
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}