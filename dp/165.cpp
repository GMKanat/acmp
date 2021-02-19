#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)



int main(){
	Speed;
	int n, m;
	cin >> n >> m;
	int a[n+1][m+1];

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}

	vector<vector<int>> dp(n+111, vector<int> (m+111, 0));
	dp[1][1] = 1;
	int last = dp[n][m];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(i == n && j == m){
				continue;
			}
			if(i + a[i][j] <= n){
				dp[i+a[i][j]][j] += dp[i][j];
			}
			if(j + a[i][j] <= m){
				dp[i][j+a[i][j]] += dp[i][j];
			}
			
		}
	}
	

	cout << dp[n][m] << '\n';
}
