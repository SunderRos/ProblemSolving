#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n, d;
	cin >> n >> d;
	int x[n][d];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < d; j++){
			cin >> x[i][j];
		}
	}
	int answer = 0;
	for(int i = 0; i < n ; i++){
		for(int j = i + 1; j < n; j++){
      long long norm = 0;
			for(int k = 0; k < d; k++){
				norm += (x[i][k] - x[j][k])*(x[i][k] - x[j][k]);
      }
      for(int k = 1; k*k <= norm; k++){
        if(k*k == norm){
          answer++;
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