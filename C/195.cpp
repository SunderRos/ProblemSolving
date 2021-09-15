#include<bits/stdc++.h>
using namespace std;


void solve(){
	int64_t n;
	cin >> n;

	int64_t answer = 0, count = 1000;

	while(n >= count){
		answer += n - count + 1;
		count *= 1000;
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}