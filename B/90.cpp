#include<bits/stdc++.h>
using namespace std;

bool palindromee(int64_t num){
	int64_t digit, rev = 0, n;
	n = num;
	bool flag = false;
	do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);
     if(n == rev){
     	flag = true;

     return flag;
}

void solve(){
	int64_t a, b;
	cin >> a >> b;
	int count = 0;
	for(int64_t i = a; i <= b; i++){
		if(palindromee(i)){
			count++;
		}
	}
	cout << count;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}