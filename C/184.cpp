#include<bits/stdc++.h>
using namespace std;

void solve(){

	int r1, c1, r2, c2;
	cin >> r1 >> c1 >> r2 >> c2;
	int r = r2 - r1, c = c2 - c1;
	int answer = 3;
	if(!r && !c) answer = 0;
	else if(r == c || r == -c || abs(r) + abs(c) <= 3) answer = 1;
	else if((r ^ c ^ 1) & 1 || abs(r + c) <= 3 || abs(r - c) <= 3 || abs(r) + abs(c) <= 6) answer = 2;
	cout << answer;

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}