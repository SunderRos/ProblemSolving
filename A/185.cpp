#include<bits/stdc++.h>
using namespace std;
 

void solve(){

	int a, b ,c ,d;
	cin >> a >> b >> c >> d;
	int e = min(a, b);
	int f = min(c, d);
	cout << min(e, f);

}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}