#include<bits/stdc++.h>
using namespace std;

void min_self(string& a, string b){
	a = min(a, b);
}

void solve(){


	int r, d, x;
	cin >> r >> d >> x;
	int answer = 0;
	int n = 10;
	while(n--){
		answer = r * x - d;
		cout << answer << '\n';
		x = answer;
	}

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}