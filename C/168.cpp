#include<bits/stdc++.h>
using namespace std;

void solve(){

	int a, b, h, m;
	cin >> a >> b >> h >> m;

	double pi = acos(-1.0);
	double ax = a * cos(2 * pi * (h * 60 + m) / 720);
	double ay = a * sin(2 * pi * (h * 60 + m) / 720);
	double bx = b * cos(2 * pi * m / 60);
	double by = b * sin(2 * pi * m / 60);

	printf("%.15lf", hypot(ax - bx, ay - by));


}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}