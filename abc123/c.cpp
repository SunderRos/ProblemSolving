#include<bits/stdc++.h>
using namespace std;

void solve(){

	int64_t N, A, B, C, D, E;
	cin >> N >> A >> B >> C >> D >> E;
	cout << max({ (N - 1) / A, (N - 1) / B, (N - 1) / C, (N - 1) / D, (N - 1) / E }) + 5;

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}