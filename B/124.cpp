#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	vector<int> H(n);
	for(int i = 0; i < n; i++){
		cin >> H[i];
	}
	int answer = 0;
	for(int i = 0; i < n; i++){
		bool flag = true;
		for(int j = 0; j < i; j++){
			if(H[j] > H[i]){
				flag = false;
				break;
			}
		}
		if(flag){
			answer++;
		}
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}