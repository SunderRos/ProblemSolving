#include<bits/stdc++.h>
using namespace std;

void solve(){

	long long a, b, c;
	scanf("%lld %lld.%lld", &a, &b, &c);
	cout << a * (b * 100 + c) / 100;

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}