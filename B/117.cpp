#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	vector<int> L(n);
	for(auto &l : L){
		cin >> l;
	}
	sort(L.begin(), L.end());
	int sum = 0;
	for(int i = 0; i < n - 1; i++){
		sum += L[i];
	}
	if(sum > L[n - 1]){
		cout << "Yes";
	}else{
		cout << "No";
	}

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}