#include<bits/stdc++.h>
using namespace std;

void solve(){

	long long n;
	cin >> n;

	for(int i = 1; i <= n; i++){
		if(stoll(to_string(i) + to_string(i)) > n){
			cout << i - 1;
			return;
		}
	}

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}