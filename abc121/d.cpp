#include<bits/stdc++.h>
using namespace std;


void solve(){

	int64_t a, b;
	cin >> a >> b;
	auto f = [&](int64_t x) -> int64_t {
		if(x % 4 == 3 || x == 0) {
			return 0;
		}
		int64_t answer = 0;
		for (int64_t i = x / 4 * 4; i < x + 1; i++) {
			answer ^= i;
		} 
		return answer;
	};
	cout << (f(b) ^ f(a - 1));
}

int main(){
   ios::sync_with_stdio(0);
   cin.tie(nullptr);
   solve();
}
