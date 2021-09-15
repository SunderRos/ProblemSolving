#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){

	int n;
	cin >> n;
	vector<int> v(n);
	unordered_set<int> s;
	for(int i = 0; i < n; i++){
		cin >> v[i];
		s.insert(v[i]);
	}
	if(s.size() != n){
		cout << "NO";
	}else{
		cout << "YES";
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}