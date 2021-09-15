#include<bits/stdc++.h>
using namespace std;

void solve(){

	int64_t W, H, x, y;
	cin >> W >> H >> x >> y;
	printf("%lf %d\n", double(W)*double(H) / 2, x + x == W && y + y == H);
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}