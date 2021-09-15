#include<bits/stdc++.h>
using namespace std;

bool oddNumDigit(int n){
	int count = 0;
	while(n != 0){
		count++;
		n /= 10;
	}
	if(count % 2 == 0){
		return false;
	}else{
		return true;
	}
}

void solve(){

	int n;
	cin >> n;
	int count = 0;
	for(int i = 1; i <= n; i++){
		if(oddNumDigit(i)){
			count++;
		}
	}
	cout << count;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}