#include<bits/stdc++.h>
using namespace std;

void solve(){

	int h, w;
	cin >> h >> w;
	char a[100][100];
	for(int i = 0; i < h; i++){
		for(int j = 0; j < w; j++){
			cin >> a[i][j];
		}
	}
	vector<bool> row(h, false);
	vector<bool> col(w, false);

	for(int i = 0; i < w; i++){
		for(int j = 0; j < h; j++){
			if(a[i][j] == '#'){
				row[i] = true;
				col[j] = true; 
			}
		}
	}
	for(int i = 0; i < h; i++){
		if(row[i]){
			for(int j = 0; j < w; j++){
				if(col[j]){
					cout << a[i][j];
				}
			}
			cout << '\n';
		}
	}

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}