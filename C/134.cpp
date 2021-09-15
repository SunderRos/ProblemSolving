#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	vector<int> v(n);
	vector<int> b(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
		b[i] = v[i];
	}
	sort(b.rbegin(), b.rend());
	for(int i = 0; i < n; i++){
		if(v[i] == b[0]){
			cout << b[1] << '\n';
		}else{
			cout << b[0] << '\n';
		}
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}