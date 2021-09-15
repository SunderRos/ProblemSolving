#include<bits/stdc++.h>
using namespace std;

void solve(){

	int l;
	cin >> l;
	printf("%.12f", double(l * l * l) / 27);
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}