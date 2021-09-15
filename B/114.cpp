#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;
void solve(){

	string s;
	cin >> s;
	int answer = INF;
	for(int i = 0; i < s.length(); i++){
		for(int j = 0; j < 3; j++){
			if(abs(stoi(s.substr(i, 3)) - 753) < answer){
				answer = abs(stoi(s.substr(i, 3)) - 753);
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