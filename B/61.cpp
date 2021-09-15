#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n, m;
	cin >> n >> m;
	vector<int> a(m), b(m);
	map<int, int> freq;

	for(int i = 0; i < m; i++){
		cin >> a[i] >> b[i];
		freq[a[i]]++;
		freq[b[i]]++;
	}

	for(int i = 1; i <= n; i++){
		cout << freq[i] << '\n';
	}

}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}