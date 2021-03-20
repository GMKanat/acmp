#include <bits/stdc++.h>

using namespace std;
int main() {

  int n, i, j, mm[1000][1000], q = 1;
  char m[1005][1005];
  cin >> n;
  for (i = 0; i < n; ++i) cin >> m[i];
  for (i = 0; i < n; ++i) mm[0][i] = m[0][i] - '0';
  for (i = 0; i < n; ++i) mm[i][0] = m[i][0] - '0';
  for (i = 1; i < n; ++i)
    for (j = 1; j < n; ++j) {
      mm[i][j] = (m[i][j] - '0') * (min(mm[i - 1][j], min(mm[i][j - 1], mm[i - 1][j - 1]))+ 1);
      if (mm[i][j] > q) q = mm[i][j];
    }
  cout << q * q;
  return 0;
}