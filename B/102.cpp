#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	vector<int> A(n);
	int answer = 0;
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
				if(i != j){
					if(abs(A[i] - A[j]) > answer){
						answer = abs(A[i] - A[j]);
					}
				}
			}
	}
	cout << answer;

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}