#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	int n;
	cin >> n;
	vector<int> dp(n+2, 0);
	dp[1] = 1;
	dp[2] = 2;
	for(int i = 3; i <= n; i++){
		dp[i] = dp[i-2] + dp[i/2];
	}	
	cout << dp[n];
}