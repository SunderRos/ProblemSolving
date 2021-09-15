#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n;
	cin >> n;
	string s;
	cin >> s;
	int answer = 0;
	for(int i = 1; i < n; i++){
		int count = 0;
		for(char c = 'a'; c <= 'z'; c++){
			bool left = false, right = false;
			for(int j = 0; j < i; j++){
				if(s[j] == c) 
					left = true;
			}
			for(int j = i; j < n; j++){
				if(s[j] == c)
					right = true;
			}
			if(left && right) count++;
		}
		answer = max(answer, count);
	
	}
	cout << answer;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}