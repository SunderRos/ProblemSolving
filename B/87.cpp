#include<bits/stdc++.h>
using namespace std;


void solve(){

	int a, b, c, x;
	cin >> a >> b >> c >> x;
	int count = 0;
	for(int i = 0; i <= a; i++){
		for(int j = 0; j <= b; j++){
			for(int k = 0; k <= c; k++){
				int temp = i * 500 + j * 100 + 50 * k;
				if(temp == x){
					count++;
				}
			}
		}
	}

	cout << count;

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}