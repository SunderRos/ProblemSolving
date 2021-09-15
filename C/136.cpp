#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	vector<int> h(n);
	int i;
	for(i = 0; i < n; i++){
		cin >> h[i];
	}
	for(i = n - 2; i >= 0; i--){
		if(h[i + 1] < h[i]){
			h[i]--;
		}
	}
	for(i = 1; i <= n; i++){
		if(h[i - 1] > h[i]){
			break;
		}
	}
	if(i == n){
		cout << "Yes";
	}else{
		cout << "No";
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}