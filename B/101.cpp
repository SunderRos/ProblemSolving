#include<bits/stdc++.h>
using namespace std;

int digit_sum(int n){
	int sum = 0;
	while(n != 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

void solve(){

	int n;
	cin >> n;
	if(n % digit_sum(n) == 0){
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