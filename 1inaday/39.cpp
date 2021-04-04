/**
 * 		author:  GMKanat
 * 		created: 03.01.2021 23:02:18
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

int main(){
	gg;
	int n;
	cin >> n;
	int a[n];
	int sum = 0, maxi = 0, di = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = n - 1; i >= 0; i--){
		maxi = max(maxi, a[i]);
		cout << maxi << " ";
		sum += maxi;
	}
	cout << sum	;
}