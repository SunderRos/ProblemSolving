#include<bits/stdc++.h>
using namespace std;
int64_t L[86];
int64_t lucas(int n){
	if(n == 0){
		return 2;
	}else if(n == 1){
		return 1;
	}
	if(L[n] != 0){
		return L[n];
	}else{
		L[n] = lucas(n - 1) + lucas(n - 2);
		return L[n];
	}
}

void solve(){

	int n;
	cin >> n;
	cout << lucas(n);
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}