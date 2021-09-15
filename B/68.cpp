#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int x){

	if(x == 0){
		return false;
	}else{
		return (!(x & (x - 1)));
	}
}

void solve(){

	int n;
	cin >> n;
	int answer = 0;
	for(int i = 1; i <= n; i++){
		if(isPowerOfTwo(i)){
			answer = i;
			answer = max(answer, i);
		}
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}