/**
 * 	author:  GMKanat
 * 	created: 16.01.2021 17:25:46
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define NeedForSpeed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)


int dp[100][100];
int main(){
	NeedForSpeed;
	//freopen("input.txt", "r+", stdin);
	string s, t;
	cin >> s >> t;
	for(int i = 0; i <= s.size(); i++){
		for(int j = 0; j <= t.size(); j++){
			if(i == 0 || j == 0){
				dp[i][j] = i + j;
			}
			else if(s[i-1] == t[j-1]){
				dp[i][j] = dp[i-1][j-1];
			}
			else{
				dp[i][j] = min(dp[i-1][j-1]+1, min(dp[i-1][j] + 1, dp[i][j-1]+1));
			}
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}		
	cout << dp[s.size()-1][t.size()-1];		
}