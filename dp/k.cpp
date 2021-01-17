/**
 * 	author:  GMKanat
 * 	created: 17.01.2021 22:36:04
**/
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define NeedForSpeed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
const int INF = INT_MIN;
int main(){
	NeedForSpeed;
	//freopen("input.txt", "r+", stdin);
	int n, W;
	cin >> n >> W;
	int w[n], c[n];
	for(int i = 1; i <= n; i++){
		cin >> w[i] >> c[i];
	}
	vector<vector<int>> dp(1+n, vector<int> (1+W, 0));
	for(int i = 1; i <= n; i++){
		for(int j = 0; j <= W; j++){
			dp[i][j] = dp[i-1][j];
			if(j - w[i] >= 0){
				dp[i][j] = max(dp[i][j], dp[i-1][j-w[i]] + c[i]);
			}
		}
	}
	cout << dp[n][W];
}