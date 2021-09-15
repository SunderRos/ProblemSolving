#include<bits/stdc++.h>
using namespace std;

bool isSquare(int n){
	bool flag = false;
	int64_t k = sqrt(n);
	if(k * k == n){
		flag = true;
	}
	return flag;
}

void solve(){

	string a, b, s;
	cin >> a >> b;
	s = a + b;
	int S = stoi(s);
	bool flag = false;
	if(isSquare(S)){
		flag = true;
	}

	cout << (flag ? "Yes" : "No");

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}