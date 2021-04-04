/**
 * 		author:  GMKanat
 * 		created: 06.01.2021 17:35:59
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("input.txt", "r+", stdin);
	int t;
	cin >> t;
	vector<int> cnt(1+t, 0);
	cnt[0] = 1;
	const int MOD = 1e6;
	for(int i = 1; i <= t; i++){
		if(i > 9){
			cnt[i] += cnt[i - 10];
		}
		if(i > 10){
			cnt[i] += cnt[i - 11];
		}
		if(i > 11){
			cnt[i] += cnt[i - 12];
		}
		cnt[i] %= MOD;
	}	
	cout << cnt[t]*2%MOD;
}