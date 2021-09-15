#include<bits/stdc++.h>
using namespace std;

void solve(){
	int d, n;
	cin >> d >> n;
	int answer = 1e9 + 7;
	if(d == 0){
		cout << min(answer, n);
	}else if(d == 1){
		int t = n;
		while(t--){
			for(int i = 1; i <= n * 100; i++){
				if(i % 100 == 0){
					i = answer;
				}
				answer = min(answer, i);
			}
		}
		cout << answer;
	}else if(d == 2){
		int t = n;
		while(t--){
			for(int i = 1; i <= n * 10000; i++){
				if(i % 10000 == 0){
					i = answer;
				}
				answer = min(answer, i);
			}
		}
		cout << answer;
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}