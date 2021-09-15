#include<bits/stdc++.h>
using namespace std;

void solve(){

	int r, x, y;
	cin >> r >> x >> y;
	double d = hypot(x, y);
	cout << (d == r ? 1 : d <= 2 ? 2 : (int) ceil(d / r));

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}