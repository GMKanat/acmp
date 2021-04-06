#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }       
    int k;
    cin >> k;
    vector<int> sum(1 + n);
    sum[n] = a[n];
    for(int i = n - 1; i > 0; i--){
        sum[i] = sum[i + 1] + a[i];
    }
    // dp[i][j]
    // i - how many left
    // j - max amount of piles can we get
    // dp[i][j] = how many scores
    vector<vector<int>> dp(n + 1, vector<int>(1 + k, 0));
    for(int i = 1; i <= k; i++){
        dp[n][i] = a[n];
    }
    for(int i = n - 1; i > 0; i--){
        for(int j = 1; j <= k; j++){
            if(j == 1){
                dp[i][1] = sum[i] - dp[i + 1][1]; 
            }
            else if(i + j > n){
                dp[i][j] = sum[i];
            }
            else{
                dp[i][j] = max(dp[i][j - 1], sum[i] - dp[i + j][j]);
            }
        }
    }
    cout << dp[1][k] << "\n";
}