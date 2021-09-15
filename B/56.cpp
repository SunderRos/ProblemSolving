#include<bits/stdc++.h>
using namespace std;

void solve(){

	int W, a, b;
	cin >> W >> a >> b;

	if(b > a + W){
		cout << b - a - W;
	}else if(b + W < a){
		cout << a - b - W;
	}else if(b = a + W){
		cout << 0;
	}else if(a = b + W){
		cout << 0;
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}