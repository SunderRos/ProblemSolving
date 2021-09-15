#include<bits/stdc++.h>
using namespace std;

void f(int64_t n){
	if(n == 0){
		return;
	}
	n--;
	f(n / 26);
	cout << char('a' + (n % 26));
}

void solve(){

	int64_t n;
	cin >> n;
	f(n);

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}