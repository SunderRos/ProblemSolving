#include<bits/stdc++.h>
using namespace std;

void solve(){

	int a , b , c , d ;
	scanf("%d%d%d%d", &a , &b , &c , &d );
	int x = c - a;
	int y = d - b ;
	printf("%d %d %d %d\n", c - y , d + x , a - y , b + x );

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}