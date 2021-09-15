#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){

	int n;
	cin >> n;
	vector<int> b(n);
	int sum = 0;
	for(int i = 1; i < n; i++){
		cin >> b[i];
		if(i == 1){
			sum += b[i];
		}else{
			sum += min(b[i], b[i - 1]);
		}
	}
	sum += b[n - 1];
	cout << sum;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}