#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	pair<pair<string, int>, int> P[110];
	for(int i = 0; i < n; i++){
		string s;
		int p;
		cin >> s >> p;
		string temp = s;
		P[i] = make_pair(make_pair(s, -p), i);
	}
	sort(P, P + n);
	for(int i = 0; i < n; i++){
		cout << P[i].second + 1 << '\n';
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}