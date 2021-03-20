#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	int n;
	cin >> n;
	vector<vector<char>> a(n+1, vector<char> (n+1));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}		
	vector<vector<int>> dp(n+1, vector<int> (n+1));
	for(int i = 0; i < n; i++){
		dp[i][0] = a[i][0] - '0';
		dp[0][i] = a[0][i] - '0';
	}
	int ans = 1;
	for(int i = 1; i < n; i++){
		for(int j = 1; j < n; j++){
			dp[i][j] = (a[i][j]-'0')*(min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]))+1);
			if(dp[i][j] > ans)
				ans = dp[i][j];
		}
	}
	cout << (long long)ans * ans << "\n";
}