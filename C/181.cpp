#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<pair<int, int>> p(n);

	for(auto& [x, y] : p){
		cin >> x >> y;
	}

	for(int i = n; i--; ){
		for(int j = i; j--;){
			for(int k = j; k--;){
				auto [x1, y1] = p[i];
				auto [x2, y2] = p[j];
				auto [x3, y3] = p[k];
				x1 -= x3;
				x2 -= x3;
				y1 -= y3;
				y2 -= y3;
				if(x1 * y2 == x2 * y1){
					cout << "Yes";
					return;
				}
			}
		}
	}
	cout << "No";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}