#include<bits/stdc++.h>
using namespace std;
	void solve(){
		int row, col;
		cin >> row >> col;

		char s[row + row][col + col];

		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
				cin >> s[i][j];
			}
		}

		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
				if(s[i][j] == '#') cout << s[i][j];
				else{
			 	int temp=0;
	            if(s[i][j-1]=='#') temp++;
	            if(s[i][j+1]=='#') temp++;
	            if(s[i+1][j]=='#') temp++;
	            if(s[i-1][j]=='#') temp++;
	            if(s[i-1][j-1]=='#') temp++;
	            if(s[i-1][j+1]=='#') temp++;
	            if(s[i+1][j-1]=='#') temp++;
	            if(s[i+1][j+1]=='#') temp++;
	            cout<<temp;
	     		}
			}
			cout << '\n';
		}
}
	int main(){
		ios::sync_with_stdio(0);
		cin.tie(0);
		solve();
	}