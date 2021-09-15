#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	double answer = v[0];
	for(int i = 0; i < n - 1; i++){
		answer = (answer + v[i + 1]) / 2;
	}
	printf("%.10lf", answer);
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}