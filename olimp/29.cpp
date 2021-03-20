#include <bits/stdc++.h>
using namespace std;

int abs_diff(int a, int b) {
	return (a>b)?a-b:b-a;
}

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	int n;
	cin >> n;
	vector<int> a(n+2);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	vector<int> dp(n+2, INT_MAX);
	dp[0] = 0;
	for(int i = 0; i < n; i++){
		dp[i+1] = min(dp[i+1], dp[i] + abs_diff(a[i+1], a[i]));
		dp[i+2] = min(dp[i+2], dp[i] + 3*abs_diff(a[i+2], a[i]));		
	}
	cout << dp[n-1];
}