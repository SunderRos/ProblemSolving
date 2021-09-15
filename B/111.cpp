#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;

	int i = n / 111;
	if(n % 111 != 0){
		i++;
	}
	cout << i * 111;

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}