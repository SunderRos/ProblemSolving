#include<bits/stdc++.h>
using namespace std;
 
void solve(){
 	
	int x, y;
	cin >> x >> y;

	cout << (min(x, y) + 3 > max(x, y) ? "Yes" : "No");


}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}