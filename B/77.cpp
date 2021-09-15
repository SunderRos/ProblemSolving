// #include<bits/stdc++.h>
// using namespace std;

// bool isSquare(int64_t x){
// 	int64_t k = sqrt(x);
// 	if(k*k == x){
// 		return true;
// 	}else{
// 		return false;
// 	}
// }

// void solve(){

// 	int64_t n;
// 	cin >> n;
// 	int64_t answer = 0;
// 	for(int64_t i = 1; i <= n; i++){
// 		if(isSquare(i)){
// 			answer = max(answer, i);
// 		}
// 	}
// 	cout << answer;
// }

// int main(){
// 	ios::sync_with_stdio(0);
// 	cin.tie(0);
// 	solve();
// }
#include<bits/stdc++.h>
using namespace std;

void solve(){

	int a;
	cin >> a;
	cout << (int)sqrt(a)*(int)sqrt(a);

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}