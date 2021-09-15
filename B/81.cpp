#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	vector<int> A(n);
	int answer = 1e9 + 7;
	for(auto &a : A){
		cin >> a;
		int count = 0;
		while(a % 2 == 0){
			a /= 2;
			count++;
		}
		answer = min(answer, count);
	}
	cout << answer;
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}