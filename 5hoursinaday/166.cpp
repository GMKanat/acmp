/**
 * 		author:  GMKanat
 * 		created: 03.01.2021 16:35:25
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

int main(){
	gg;
	int start, n;
	cin >> start >> n;
	int a[n + 1];
	a[1] = start;
	for(int i = 2; i <= n; i++){
		int sum = 0;
		for(int j = i - 1; j >= 1 && j >= i-3; j--){
			sum += a[j];
		}
		int maxi = 0;
		for(int n3 = 0; n3 < 5 && n3*3 <=sum; n3++){
			int n5 = (sum-n3*3)/5;
			maxi = max(maxi, n3*5	 + n5*9);
		}
		a[i] = maxi;
	}
	int sum = 0;
	for(int i = n; i >= n-2 && i>=1; i--){
		sum += a[i];
	}
	cout << sum;
}