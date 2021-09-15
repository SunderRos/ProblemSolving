#include<bits/stdc++.h>
using namespace std;

void solve(){

	int64_t x, k, d;
	cin >> x >> k >> d;
	x = abs(x);

	int64_t straight = min(k, x / d);
	k -= straight;
	x -= straight * d;

	if(k % 2 == 0){
		cout << x;
	}else{
		cout << d - x;
	}

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}