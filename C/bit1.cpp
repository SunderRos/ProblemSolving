#include <bits/stdc++.h>
using namespace std;

void solve(){

	int a, b;
	cin >> a >> b;
	int answer = a^b;
	cout << answer << '\n';

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	int tt;
	cin >> tt;
	while(tt--) solve();
}