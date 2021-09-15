#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> P(n);
	for(auto &a : P){
		cin >> a;
	}
	int k = 0;
	for(int i = 0; i < n; i++){
		if(P[i] != (i + 1)) k++;
	}
	if(k <= 2) cout << "YES";
	else
		cout << "NO";

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}