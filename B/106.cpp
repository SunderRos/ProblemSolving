#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	int answer = 0;
	for(int i = 1; i <= n; i += 2){
		int temp = 0;
		for(int j = 1; j <= i; j++){
			if(i % j == 0){
				temp++;
			}
			if(temp == 8){
				answer++;
			}
		}
	}

	cout << answer;

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}