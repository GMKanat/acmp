/**
 * 	author:  GMKanat
 * 	created: 16.01.2021 19:41:20
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define NeedForSpeed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int dp[100][100];
int main(){
	NeedForSpeed;
	freopen("input.txt", "r+", stdin);
	int n;
	cin >> n;
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			dp[i][j] = a[i][j];
			if(i > 0){
				dp[i][j] = max(dp[i][j], dp[i-1][j]+a[i][j]);
			}
			if(j > 0){
				dp[i][j] = max(dp[i][j], dp[i][j-1]+a[i][j]);
			}
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}

}