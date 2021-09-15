#include<bits/stdc++.h>
using namespace std;


void solve(){
typedef long long ll;

	int n;
	cin >> n;
	vector<int> vec(n);
	vector<int> p(n);
	vector<int> q(n);
	for(int i = 0; i < n; i++)
		cin >> p[i];
	for(int i = 0; i < n; i++)
		cin >> q[i];

	if(p > q) swap(p, q);
	ll answer = 0;
	while(p != q){
		answer += 1;
		next_permutation(p.begin(), p.end());
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}