#include<bits/stdc++.h>
using namespace std;
 
int digit_sum(int x){
	int sum = 0;
		while(x != 0){
		sum += x % 10;
		x /= 10;
	}
	return sum;
}

void solve(){
 	
	int A, B;
	cin >> A >> B;

	cout << max(digit_sum(A), digit_sum(B));

}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}