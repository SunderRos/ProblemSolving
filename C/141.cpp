#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){

	int n, k, q;
	cin >> n >> k >> q;
	vector<int> peep(n + 1, k - q);
	for(int i = 1; i <= q; i++){
		int a;
		cin >> a;
		int low = 1, high = n;
		while(low <= high){
			int mid = low + (high - low) / 2;
			if(mid == a){
				peep[mid]++;
				break;
			}else if(mid > a){
				high = mid - 1;
			}else{
				low = mid + 1;
			}
		}
	}
	for(int i = 1; i <= n; i++){
		if(peep[i] > 0){
			cout << "Yes" << '\n';
		}else{
			cout << "No" << '\n';
		}
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}