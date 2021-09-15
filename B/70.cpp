#include<bits/stdc++.h>
using namespace std;

void solve(){

	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if(max(a, c) <= min(b, d)){
		cout << min(b - a, min(d - c,min(b - c, min(d - a, b - a + d - c))));
	}else{
		cout << 0;
	}

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}