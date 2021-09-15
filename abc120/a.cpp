#include<bits/stdc++.h>
using namespace std;

void solve(){

	int a, b, c;
	cin >> a >> b >> c;
	int answer;
	answer = b / a;
	if(answer >= c) {
		cout << c;
	}else{
		cout << answer;
	}

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}