#include<bits/stdc++.h>
using namespace std;

void solve(){

	char S[222];
	cin >> S;
	int n = strlen(S);

	for(int i = n - 2; i >= 0; i -= 2){
		if(strncmp(S, S + i / 2, i / 2) == 0){
			cout << i;
			return;
		}
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}