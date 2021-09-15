#include<bits/stdc++.h>
using namespace std;

void solve(){
	int k;
	int a[5];
	for (int i = 0; i < 5; i++)
		cin >> a[i];
	cin >> k;
	for (int i = 0; i < 5; i++) {
		for (int j = 1; j < 5; j++) {
			if(abs(a[i] - a[j]) > k) {
				cout << ":(";
				return;
			}
		}
	}
	cout << "Yay!";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}