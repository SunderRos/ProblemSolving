#include<bits/stdc++.h>
using namespace std;

void solve(){

	int a, b, k;
	cin >> a >> b >> k;

	for(int i = a; i <= min(b, a + k - 1); i++) cout << i << '\n';
	for(int i = max(a + k, b - k + 1); i <= b; i++) cout << i << '\n';

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}