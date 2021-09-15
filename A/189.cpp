#include<bits/stdc++.h>
using namespace std;
 
void solve(){
 
	char a, b, c;
	cin >> a >> b >> c;

	if(a == b && a == c){
		cout << "Won";
	}else{
		cout << "Lost";
	}

}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}