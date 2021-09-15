#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	bool flag = false;
	for(int i = 0; i <= 100; i++){
		for(int j = 0; j <= 100; j++){
			if(4*i + 7*j == n){
				flag = true;
			} 
		}
	}

	cout << (flag ? "Yes" : "No");

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}