#include<bits/stdc++.h>
using namespace std;

void solve(){

	int v, t, s ,d;
	cin >> v >> t >> s >> d;

	if(d < v * t || d > v * s){
		cout << "Yes";
	}else{
		cout << "No";
	}


}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}