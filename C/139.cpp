#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){

	int n;
	cin >> n;
	vector<ll> h(n);
	for(int i = 0; i < n; i++){
		cin >> h[i];
	}
	vector<int> dp(n);
 	for (int i = n - 2; i >= 0; --i) 
 		if (h[i] >= h[i + 1]) {
    		dp[i] = 1 + dp[i + 1];
  		}

  	cout << *max_element(dp.begin(), dp.end());
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}