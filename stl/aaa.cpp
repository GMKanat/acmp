#include<bits/stdc++.h>
using namespace std;

//solution:
#define int int64_t
#define span(a) begin(a), end(a)

void hike() {
  int n; cin >> n;
  int a[n], b[n];
  for(int i = 0; i < n; ++i) cin >> a[i];
  for(int i = 0; i < n; ++i) cin >> b[i];
  int dp[n]{}, maxima = 1;
  for(int i = 0; i < n; ++i) {
    dp[i] = 1;
    for(int j = 0; j < i; ++j) if(a[j] < a[i] and b[j] > b[i]) {
      dp[i] = max(dp[i], dp[j] + 1);
    }
    maxima = max(maxima, dp[i]);
  }
  cout << maxima << "\n";
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
  int t = 1; cin >> t;
  while(t--) hike();
  return 0;
} //farewell, until we meet again..