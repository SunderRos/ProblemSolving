#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9 + 5;
void solve(){

	ll n;
	cin >> n;
	vector<int> P(n);
	int minN = INT_MAX;
	for(int i = 0; i < n; i++){
		cin >> P[i];
	}
	int count = 0;
	for(int i = 0; i < n; i++){
		if(minN >= P[i]){
			count++;
		}
		minN = min(minN, P[i]);
	}
	cout << count;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}