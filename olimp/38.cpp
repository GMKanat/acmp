#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
ll dp[111][111],a[111]; 
int main(){
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	for(int L=n;L>0;--L){
		for(int R=L;R<=n;++R){
			cout << L << " " << R << "\n";
			dp[L][R]=max(a[L]-dp[L+1][R],a[R]-dp[L][R-1]);
		}
	}
	cout << dp[1][n] << "\n";
	cout << "\n";



}