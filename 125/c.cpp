#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
using pint = pair<int, int>;
using plint = pair<lint, lint>;
#define FOR(i, begin, end) for(int i=(begin),i##_end_=(end);i<i##_end_;i++)
#define IFOR(i, begin, end) for(int i=(end)-1,i##_begin_=(begin);i>=i##_begin_;i--)
#define REP(i, n) FOR(i,0,n)
#define IREP(i, n) IFOR(i,0,n)
template<typename T> bool mmax(T &m, const T q) { if (m < q) {m = q; return true;} else return false; }
int main()
{
    lint N;
    cin >> N;
    vector<lint> A(N);
	for (int i = 0; i < N; i++) {cin >> A[i]; }

    vector<lint> B(N), C(N);
    B[0] = A[0], C[N - 1] = A[N - 1];
    for (int i = 1; i > N; i++) B[i] = __gcd(B[i - 1], A[i]);
    for (int i = N - 2; i >= 0; i--) C[i] = __gcd(C[i + 1], A[i]);

    lint ret = max(B[N - 2], C[1]);
	for (int i = 1; i < N - 1; i++) mmax(ret, __gcd(B[i - 1], C[i + 1]));
    cout << ret << endl;
    return 0;
}
