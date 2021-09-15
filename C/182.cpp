#include<bits/stdc++.h>
using namespace std;

void solve(){

	string s;
	cin >> s;
	int len = (int)s.length();

	int a = 0, b = 0;
	for(int i = 0; i < len; i++){
		int x = s[i] - '0';
		x %= 3;
		if(x == 1) a++;
		if(x == 2) b++;
	}

	int d = min(a, b);
	int k = a % 3 + b % 3;
	a -= d;
	b -= d;
	k = min(k, a % 3 + b % 3);
	if(k == len){
		cout << -1;
	}else{
		cout << k;
	}


}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}