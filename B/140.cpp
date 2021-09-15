#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	vector<int> c(n - 1);

	for(int i = 0; i < n; i++){
		cin >> a[i];
		a[i]--;
	}

	for(int i = 0; i < n; i++){
		cin >> b[i];
	}

	for(int i = 0; i < n - 1; i++){
		cin >> c[i];
	}
	int answer = 0;
	for(int i = 0; i < n; i++){
		int sum = 0, add_sum = 0;
		sum += b[a[i]];
		if(i > 0 && a[i] == a[i - 1] + 1){
			add_sum += c[a[i - 1]];
		}
		answer += add_sum + sum ;
	}
	cout << answer ;

}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}