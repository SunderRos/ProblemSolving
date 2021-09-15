#include<bits/stdc++.h>
using namespace std;


int A, B, C, N;
int l[8];

int dfs(int k, int a, int b, int c) {
	if(k == N) {
		if(a == 0 || b == 0 || c == 0) return 1e9;
		return abs(a - A) + abs(b - B) + abs(c - C);
	}
	int answer = 1e9;
	answer = min(answer, dfs(k + 1, a + l[k], b , c) + (a > 0 ? 10 : 0));
	answer = min(answer, dfs(k + 1, a, b + l[k], c) + (b > 0 ? 10 : 0));
	answer = min(answer, dfs(k + 1, a, b, c + l[k]) + (c > 0 ? 10 : 0));
	answer = min(answer, dfs(k + 1, a, b, c));
	return answer;
}

void solve() {
	cin >> N >> A >> B >> C;
	for (int i = 0; i < N; i++) {
		cin >> l[i];
	}

	cout << dfs(0, 0, 0, 0);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	solve();
}