#include<bits/stdc++.h>
using namespace std;

void solve(){

	int N;
	string S;
	cin >> N >> S;
	int x = 0;
	int ma = 0;

	for(int i = 0; i < N; i++){
		if(S[i] == 'I'){
			x++;
			ma = max(x, ma);
		}else{
			x--;
		}
	}

	cout << ma;

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}