#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){

	int n;
	cin >> n;
	int x[n], y[n];
	vector<int> v;
	for(int i = 0; i < n; i++){
		cin >> x[i] >> y[i];
		v.push_back(i);
	}
	int f = 1;
	for(int i = 2; i <= n; i++){
		f *= i;
	}
	double sum = 0;
	do{	
		for(int i = 0; i < n - 1; i++){
			sum += sqrt((x[v[i+1]]-x[v[i]])*(x[v[i+1]]-x[v[i]]) + (y[v[i+1]]-y[v[i]])*(y[v[i+1]]-y[v[i]]));
		}
	} while(next_permutation(v.begin(), v.end()));

	cout << fixed << setprecision(10) << (1.0 * sum / f);
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}