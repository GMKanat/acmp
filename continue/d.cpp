#include <bits/stdc++.h>
using namespace std;


const int maxn = 1e5 + 19;  
const long double inf = 1e9;

long double dp[maxn][10];
int p[maxn][10];
int pr[maxn][10];

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    for(int i = 0; i < maxn; i++){
        for(int j = 0; j < 10; j++){
            dp[i][j] = -inf;
        }
    }

    int n, d;
    cin >> n >> d;      
    dp[0][1] = 0;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a[i] = x;
        long double xx = log(x);
        for(int d = 0; d < 10; d++){
            dp[i + 1][d] = dp[i][d];
        }
        for(int d = 0; d < 10; d++){
            if(dp[i][d] < -inf + 5){
                continue;
            }
            int nd = (d*x)%10;
            long double nx = xx + dp[i][d];
            if(dp[i + 1][nd] <= nx){
                dp[i + 1][nd] = nx;
                p[i + 1][nd] = 1;
                pr[i + 1][nd] = d;
            }
        }
    }
    long double z = dp[n][d];
    if(z < -inf + 5){
        cout << -1 << "\n";
        return 0;
    }
    vector<int> ans;
    for(int i = n; i > 0; i--){
        if(p[i][d]){
            ans.push_back(a[i - 1]);
            d = pr[i][d];
        }
    }
    if(!ans.size()){
        cout << -1;
        return 0;
    }
    cout << ans.size() << "\n";
    for(int i = ans.size() - 1; i >= 0; i--){
        cout << ans[i] << " ";
    }
}