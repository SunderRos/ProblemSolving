#include<bits/stdc++.h>
using namespace std;

void solve(){

	string S;
	cin >> S;
	int n = S.size();

	while(true){
		if(n % 2 == 0){
			if(S.substr(0, (n - 1) / 2) == S.substr((n - 1) / 2, (n - 1) / 2)){
				cout << n - 2;
				return;
			}
			n -= 2;
		}else{
			if(S.substr(0, (n - 1) / 2) == S.substr((n - 1) / 2, (n - 1) / 2)){
				cout << n - 3;
				return;
			}
			n -= 2;
		}
	}


}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}