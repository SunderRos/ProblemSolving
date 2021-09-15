#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n, l;
	cin >> n >> l;
	if(l>=0) cout<<l*(n-1)+n*(n+1)/2-1-(n-1)<<endl;
    else if(l<0&&l+n-1>=0) cout<<l*n+n*(n+1)/2-n<<endl;
    else if(l<0&&l+n-1<0) cout<<l*(n-1)+n*(n+1)/2-n-(n-1)<<endl;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}