#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin >> s;
	int count = 0;
	int answer = 0;
	for(char &k : s){
		if(k == 'A' || k == 'C' || k == 'G' || k == 'T'){
			count++;
		}else if(char(k + 1) != 'A' || char(k + 1) != 'C' || char(k + 1) != 'G' || char(k + 1) != 'T'){
			count = 0;
		}
		answer = max(answer, count);
	}
	cout << answer;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}