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
	int n, a, b;
	cin >> n >> a >> b;
	int answer = 0;
	for(int i = 1; i <= n; i++){
		if(digit_sum(i) >= a && digit_sum(i) <= b){
			answer += i;
		}
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}