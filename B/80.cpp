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

bool hashard(int n){
	if(n % digit_sum(n) == 0){
		return true;
	}else{
		return false;
	}
}

void solve(){

	int n;
	cin >> n;
	cout << (hashard(n) ? "Yes" : "No");

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}