#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int h, w, x, y;
	cin >> h >> w >> x >> y;
	x--;
	y--;
	string s[h];
	for (auto &i : s) {
		cin >> i;
	}	
	int cnt = -3;
	for (int i = x; i < h && s[i][y] != '#'; i++) cnt++;
	for (int i = x; i >= 0 && s[i][y] != '#'; i--) cnt++;
	for (int j = y; j < w && s[x][j] != '#'; j++) cnt++;
	for (int j = y; j >= 0 && s[x][j] != '#'; j--) cnt++;
	cout << cnt;
	return 0;
}