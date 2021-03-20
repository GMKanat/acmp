#include <bits/stdc++.h>
using namespace std;

long long dp[111][111];

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0); 	
	int n;
	cin >> n;
	vector<int> a(n);
	for(int &x: a){
		cin >> x;
	}
	for(int k = 1; k <= n; k++){
		for(int i = 0; i + k <= n; i++){
			int j = i + k;
			if(!((n - k) % 2)){
				dp[i][j] = max(dp[i+1][j] + a[i], dp[i][j-1] + a[j-1]);
			}
			else{
				dp[i][j] = min(dp[i+1][j] - a[i], dp[i][j-1] - a[j-1]);
			}
			// cout << "i: " << i << " j: " << j << endl;
   //          cout << dp[i][j] << endl;
		}
	}
	int ans = dp[0][n];
	if(ans > 0)
		cout << 1 << "\n";
	else if(ans < 0)
		cout << 2 << "\n";
	else cout << 0;
}