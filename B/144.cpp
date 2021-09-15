#include<bits/stdc++.h>
using namespace std;
 
void solve(){
 
	int n;
	cin >> n;
	int answer = 0;
	if(n > 81){
		cout << "No";
		return;
	}
	if(n == 1){
		cout << "Yes";
		return;
	}
	for(int i = 2; i <= 9; i++){
		for(int j = 1; j <= 9; j++){
			if(i * j == n){
				cout << "Yes";
				return;
			}
		}
	}
 
 	cout << "No";
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}