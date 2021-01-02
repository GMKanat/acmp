/**
 * 		author:  GMKanat
 * 		created: 01.01.2021 22:08:27
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

int main(){
	gg;
	int n;
	cin >> n;
	int cnt = n/107;
	int k = n - cnt*107;
	int ans;
	if(k > 7){
		ans = cnt*100+k-7;
		cout << ans << " " << (cnt+1)*7;
		return 0;
	}
	else ans = cnt*100;
	cout << ans << " " << cnt*7;
}