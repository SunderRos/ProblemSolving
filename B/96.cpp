#include<bits/stdc++.h>
using namespace std;

void solve(){

	vector<int> A(3);
	cin >> A[0] >> A[1] >> A[2];
	int k;
	cin >> k;
	int sum = 0;
	sort(A.begin(), A.end());
	while(k--){
		A[2] *= 2;
	}
	for(auto &a : A){
		sum += a;
	}
	cout << sum;


}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}