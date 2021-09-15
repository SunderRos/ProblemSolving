#include<bits/stdc++.h>
using namespace std;

void solve(){
  int H, W, h, w;
  cin >> H >> W >> h >> w;
  cout << H * W - h * W - H * w + (h * w);
}

int main(){
   ios::sync_with_stdio(0);
   cin.tie(nullptr);
   solve();
}
