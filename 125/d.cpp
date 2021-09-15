#include<bits/stdc++.h>
using namespace std;

int n;
int64_t a[100005], dp[100005][2];

void solve(){

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    dp[1][0] = a[1];
    dp[1][1] = -a[1];

    for (int i = 2; i <= n; i++) {
        dp[i][0] = max(dp[i - 1][0] + a[i], dp[i - 1][1] - a[i]);
        dp[i][1] = max(dp[i - 1][0] - a[i], dp[i - 1][1] + a[i]);
    }
    cout << dp[n][0];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}