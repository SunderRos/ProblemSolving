#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
template<class T> T &chmax(T &a,const T &b){ return a = max(a,b); }
void solve(){

	int n;
	cin >> n;
	vector<string> s(n);
	map<string, int> freq;
	for(int i = 0; i < n; i++){
		cin >> s[i];
		freq[s[i]]++;
	}
	int k = 0;
	set<string> ss;
		
	for(int i = 0; i < n; i++){
		if(k < freq[s[i]]){
			k = freq[s[i]];
		}
	}
	for(int i = 0; i < n; i++){
		if(k == freq[s[i]]){
			ss.insert(s[i]);
		}
	}
	for(auto v : ss){
		cout << v << '\n';
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}