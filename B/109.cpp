#include<bits/stdc++.h>
using namespace std;



void solve(){

	int n;
	cin >> n;
	vector<string> W(n);
	bool flag1 = true;
	bool flag2 = true;
	for(int i = 0; i < n; i++){
		cin >> W[i];
	}

	for(int i = 0; i < n - 1; i++){
		if(W[i + 1].front() != W[i].back()){
			flag1 = false;
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(W[i] == W[j]){
				flag2 = false;
			}
		}
	}
	cout << ((flag1 && flag2) ? "Yes" : "No");

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}