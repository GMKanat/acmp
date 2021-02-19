#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const int mx = 1e7+1;

int main(){
	Speed;
	int n, m;
	cin >> n >> m;
	vector<vector<int>> a(n+1, vector<int> (m+1, 0));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}	

	vector<vector<int>> dp(n+111, vector<int> (m+111, 0));

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(j == 1){
				dp[i][j] = dp[i-1][j] + a[i][j];
			}
			else if(i == 1) {
				dp[i][j] = dp[i][j-1] + a[i][j];
			}
			else{
				dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + a[i][j];
			}
		}
	}
	// for(int i = 1; i <= n; i++){
	// 	for(int j = 1; j <= m; j++){
			// cout << dp[i][j] << " ";
	// 	}
	// 	cout << "\n";
	// }

	cout << dp[n][m];
}