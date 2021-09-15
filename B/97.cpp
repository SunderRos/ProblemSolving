#include<bits/stdc++.h>
using namespace std;

void solve(){

	int x;
	cin >> x;
	vector<bool> expo(x + 1);
	expo[1] = 1;
	for(int i = 2; i <= x; i++){
		int v = i * i;
		while(v <= x){
			expo[v] = 1;
			v *= i;
		}
	}
	for(int i = x; i >= 1; i--){
		if(expo[i]){
			cout << i << '\n';
			return;
		}
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}