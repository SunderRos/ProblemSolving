#include<bits/stdc++.h>
using namespace std;

void solve(){

	string s;
	cin >> s;
	int a, z, n = s.size();

	for(int i = 0; i < n; i++){
		if(s[i] == 'A'){
			a = i;
			break;
		}
	}
	for(int i = n - 1; i >= 0; i--){
		if(s[i] == 'Z'){
			z = i;
			break;
		}
	}
	cout << z - a + 1;

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}