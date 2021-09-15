#include<bits/stdc++.h>
using namespace std;

bool isMonth(int n){
	return n >= 1 && n <= 12;
}

void solve(){
	string s;
	cin >> s;
	int n = s.length();
	int firsthalf = stoi(s.substr(0, 2));
	int lasthalf = stoi(s.substr(2, 2));
	if(isMonth(firsthalf) && isMonth(lasthalf)){
		cout << "AMBIGUOUS";
		return;
	}else if(isMonth(firsthalf)){
		cout << "MMYY";
		return;
	}else if(isMonth(lasthalf)){
		cout << "YYMM";
		return;
	}
	cout << "NA";

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}