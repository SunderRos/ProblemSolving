#include<bits/stdc++.h>
using namespace std;

void solve(){

	int a, b;
	cin >> a >> b;

	cout << (b - a)*(b - a + 1) / 2 - b;

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}