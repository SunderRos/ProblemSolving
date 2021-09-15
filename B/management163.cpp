#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	vector<int> A(200010);
	map<int, int> freq;
	for(int i = 2; i <= n; i++){
		cin >> A[i];
		freq[A[i]]++;
	}

	for(int i = 1; i <= n; i++){
		cout << freq[i] << '\n';
	}


}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}