#include<bits/stdc++.h>
using namespace std;

int f(int n){
	if(n % 2 == 0){
		return n / 2;
	}else{
		return 3*n + 1;
	}
}


void solve(){

	int s;
	cin >> s;
	int a[1000];
	int answer = 0;
	for(int i = 1; i < 10*s; i++){
		if(i == 1){
			a[i] = s;
		}else{
			a[i] = f(a[i - 1]);
		}
	}

	for(int i = 0; i < 5*s; i++){
		for(int j = i + 1; j < 5*s; j++){
			if(a[j] == a[i]){
				cout << j;
				return;
			}
		}
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}