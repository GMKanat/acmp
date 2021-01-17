/**
 * 	author:  GMKanat
 * 	created: 17.01.2021 23:36:24
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define NeedForSpeed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
	NeedForSpeed;
	freopen("input.txt", "r+", stdin);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}	
		long long dp[n+1];
		for(int i = n - 1; i >= 0; i--){
			dp[i] = a[i];
			int j = a[i] + i;
			if(j < n){
				dp[i] = dp[i] + dp[j];
			}
		}
		sort(dp, dp+n);
		cout << dp[n-1] << endl;
	}

}