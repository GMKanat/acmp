/**
 * 		author:  GMKanat
 * 		created: 06.01.2021 14:57:35
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("input.txt", "r+", stdin);
	int n;
	cin >> n;
	long long a[n + 1];
	a[0] = 1;
	a[1] = 2;
	a[2] = 4;
	long long s = 0;
	for(int i = 3; i < n; i++){
		a[i] = a[i-1] + a[i-2] + a[i-3];
		s += a[i];
	}	
	cout << a[n-1];
}