#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	vector<double> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	double sum = 0;
	for(int i = 0; i < n; i++){
		sum += 1 / a[i];
	}

	cout << 1 / sum;

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}