#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 5;

void solve(){

	int a, b;
	cin >> a >> b;
	int i = 1;
	int count = 0;
	while(i < b){
		i--;
		i += a;
		count++;
	}
	cout << count;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}