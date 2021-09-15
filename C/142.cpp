#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){

	int n;
	cin >> n;
	vector<int> a(n + 1);
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		a[x] = i + 1;
	}
	for(int i = 0; i < n; i++){
		cout << a[i + 1] << ' ';
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}