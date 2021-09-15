#include<stdio.h>
int f(int n){
	int c[20]={};
	while(n){
		c[n%10]++;
		n/=10;
	}
	int g1=0,g2=0;
	for(int i=9;i>=0;i--)for(int j=0;j<c[i];j++)g1=g1*10+i;
	for(int i=0;i<=9;i++)for(int j=0;j<c[i];j++)g2=g2*10+i;
	return g1-g2;
}

int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=0;i<k;i++)n=f(n);
	printf("%d\n",n);
}
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// int64_t desc(string s){
// 	sort(s.rbegin(), s.rend());
// 	return stoll(s);
// }

// int64_t asc(string s){
// 	sort(s.begin(), s.end());
// 	return stoll(s);
// }

// int64_t f(string n, string k){
// 	int N = stoll(n);
// 	int64_t c[100001] = {};
// 	c[0] = N;
// 	for(int i = 0; i < stoll(k); i++){
// 		c[i + 1] = desc(to_string(c[i])) - asc(to_string(c[i]));
// 	}
// 	return c[stoll(k)];
// }

// void solve(){
// 	string n, k;
// 	cin >> n >> k;
// 	cout << f(n, k);
// }


// int main(){
// 	ios::sync_with_stdio(0);
// 	cin.tie(0);
// 	solve();
// }
