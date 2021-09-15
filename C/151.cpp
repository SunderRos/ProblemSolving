#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){

	int n, m;
	cin >> n >> m;
	int WA[1000005];
	bool AC[100005];
	int answer = 0;
	int pen = 0;
	for(int i = 0; i < n; i++){
		WA[i] = 0;
		AC[i] = false;
	}

	while(m--){
		int p;
		string s;
		cin >> p >> s;
		if(AC[p]) continue;
		if(s == "AC"){
			AC[p] = true;
			answer++;
			pen += WA[p];
		}else if(s == "WA"){
			WA[p]++;
		}
	}
	cout << answer << ' ' << pen;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}