/**
 * 		author:  GMKanat
 * 		created: 02.01.2021 23:50:27
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

int main(){
	gg;
	int n;
	cin >> n;
	if(n == 0) {
		cout << 10;
		return 0;
	}

	if(n == 1) {
		cout << 1;
		return 0;
	}
	long long ans = 0;
	long long pow = 1;
	for(int i = 9; i > 1; i--){
		while(n % i == 0){
			n /= i;
			ans += pow * i;
			pow *= 10;
		}
	}
	if(n == 1) cout << ans;
	else cout << -1;
}