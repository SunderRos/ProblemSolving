#include<bits/stdc++.h>
using namespace std;

void solve(){

	int a, b;
	cin >> a >> b;
	int c = a + b;

	if(c >= 15 && b >= 8){
		cout << 1;
	}else if(c >= 10 && b >= 3){
		cout << 2;
	}else if(c >= 3){
		cout << 3;
	}else{
		cout << 4;
	}

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}