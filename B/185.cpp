#include<bits/stdc++.h>
using namespace std;

void solve(){
	vector<int> v = {1,2,3,4,5};
	int sum = accumulate(v.begin(), v.end(), int(1), multiplies<int> ());
	cout << sum;
}	

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}