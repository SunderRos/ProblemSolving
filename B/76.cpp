#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n, k;
	cin >> n >> k;
	int answer = 1;
	while(n--){
		if(2*answer > answer + k){
			answer += k;
		}else{
			answer += answer;
		}
	}
	cout << answer; 
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}