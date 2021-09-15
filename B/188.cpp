#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	vector<int> a(1 << 16);
	for(int i = 0; i < (1 << n); i++){
		cin >> a[i];
	}

	auto p = a.begin() + (1 << n) / 2;
	auto p1 = max_element(a.begin(), p);
	cout << *p1 << '\n';
	auto p2 = max_element(p, a.end());
	cout << *p2;
	if(*p1 > *p2) p1 = p2;
	cout << p2 - a.begin() + 1;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}