#include<bits/stdc++.h>
using namespace std;

void solve(){

	int k, x;
	cin >> k >> x;
	if(k == 1){
		cout << x;
	}else{
		for(int i = x - k + 1; i <= x + k - 1; i++){
			cout << i << ' ';
		}
	}

}	

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}