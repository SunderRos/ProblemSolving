#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 20;

int counter(int x) {
    if(x == 0) return 0;
    return counter(x >> 1) + (x & 1);
}

void solve(){

	int n;
	cin >> n;
	int answer = 0;
	int x[N][N];
	int y[N][N];
	int A[N];
	for(int i = 1; i <= n; i++){
		cin >> A[i];
		for(int j = 1; j <= A[i]; j++){
			cin >> x[i][j] >> y[i][j];
		}
	}
	for(int bit = 1; bit < (1 << n); bit++){
		bool ok = true;
		for(int i = 1; i <= n; i++){
			if(!(bit & (1 << (i - 1)))){
				continue;
			}
			for(int j = 1; j <= A[i]; j++){
				if(((bit >> (x[i][j] - 1)) & 1) ^ y[i][j]) ok = false;
			}
		}
		if(ok) answer = max(answer, counter(bit));
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}