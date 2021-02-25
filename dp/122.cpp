#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)



int main(){
	Speed;
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}	
	vector<int> dp(n);
	int ans = 0;
	for(int i = 0; i < n; i++){
		dp[i] = 1;
		for(int j = 0; j < n; j++){
			if(a[i] > a[j]){
				dp[i] = max(dp[i], dp[j]+1);
			}
		}
		ans = max(ans, dp[i]);
	}
	cout << ans;
}