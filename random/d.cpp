/**
 * 		author:  GMKanat
 * 		created: 08.01.2021 09:47:52
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	float a[n+1];
	a[1] = 2;
	a[2] = 2;
	for(int i = 3; i <= n; i++){
		a[i] = a[i-1] + a[i-2];
	}
	printf("%0.1lf", a[n]);
}