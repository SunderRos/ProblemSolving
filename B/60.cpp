#include<bits/stdc++.h>
using namespace std;

void solve(){

	int a, b ,c;
	cin >> a >> b >> c;
	bool flag = false;
	for(int i = 0; i < 100; i++){
		if(a * i % b == c){
			flag = true;
		}
	}

	cout << (flag ? "YES" : "NO");

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}