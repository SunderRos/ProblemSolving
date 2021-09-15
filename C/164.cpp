#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	set<string> s;
	vector<string> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
		s.insert(v[i]);
	}
	cout << s.size();

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}