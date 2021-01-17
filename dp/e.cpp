/**
 * 	author:  GMKanat
 * 	created: 17.01.2021 11:19:31
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define NeedForSpeed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
ll dp[100000];
int main(){
	NeedForSpeed;
	//freopen("input.txt", "r+", stdin);
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	dp[0] = 0;
	dp[1] = abs(a[1]-a[0]);
	for(int i = 2; i < n; i++){
		ll x = dp[i-1] + abs(a[i] - a[i-1]);
		ll y = dp[i-2] + abs(a[i] - a[i-2]);
		dp[i] = min(x, y);
	}
	cout << dp[n-1];
}