#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	vector<int> A(n);
	set<int> S;
	for(auto &a : A){
		cin >> a;
		S.insert(a);
	}
	cout << S.size();

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}