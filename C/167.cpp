#include<bits/stdc++.h>
using namespace std;

template<class T> T &chmin(T &a,const T &b){ return a = min(a,b); }
template<class T> T &chmax(T &a,const T &b){ return a = max(a,b); }
const int INF = 1e9 + 5;
const int N = 20;
const int M = 20;

int A[N][M];
int x;
int C[N];
void solve(){
	int n, m;
	cin >> n >> m >> x;
	int answer = INF;
	for(int i = 0; i < n; i++){
		cin >> C[i];
		for(int j = 0; j < m; j++){
			cin >> A[i][j];
		}
	}

	for(int i = 0; i < (1 << n); i++){
		int sum[M] = {0}, csum = 0;
		for(int j = 0; j < n; j++){
			if(!(i >> j & 1)){
				continue;
			}
			csum += C[j];
			for(int k = 0; k < m; k++)
				sum[k] += A[j][k];
		}
		bool ok = true;
		for(int i = 0; i < m; i++){
			if(sum[i] < x) ok = false;
		}
		if(ok) chmin(answer, csum);
	}
	cout << (answer == INF ? -1 : answer);
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}