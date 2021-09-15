#include<bits/stdc++.h>
using namespace std;

void solve(){

	string s;
	cin >> s;
	int answer = 0;
	int n = int(s.length());
	stack<char> st;
	for (auto &it : s) {
		if (it == '0') {
			if(st.size() && st.top() == '1') {
				answer += 2;
				st.pop();
			} else {
				st.push(it);
			}
		} else {
			if (st.size() && st.top() == '0') {
				answer += 2;
				st.pop();
			} else {
				st.push(it);
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