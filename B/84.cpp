#include<bits/stdc++.h>
using namespace std;

void solve(){

	char A, B;
	string S;
	
	cin >> A >> B >> S;
	bool flag1 = false, flag2 = false, flag = false;

	for(int i = 0; i < S.size() - int(B - '0') - 1; i++){
		if(S[i] >= '0' && S[i] <= '9'){
			flag1 = true;
		}
	}
	for(int i = int(A - '0') + 1; i < S.size(); i++){
		if(S[i] >= '0' && S[i] <= '9'){
			flag2 = true;
		}
	}
	if(flag1 == true && flag2 == true && (S[S.size() - int(B - '0') - 1] == '-')){
		flag = true;
	}
	cout << (flag ? "Yes" : "No");
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}