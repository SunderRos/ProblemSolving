#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int answer = 0;
  for(int i = 1; i <= n; i++){
  	bool ok = true;
  	for(int base : {8, 10}){
  		int x = i;
  		while(x > 0){
  			if(x % base == 7){
  				ok = false;
  			}
  			x /= base;
  		}
  	}
  	if(ok) answer++;
  }
  cout << answer;
}