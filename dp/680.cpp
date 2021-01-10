/**
 * 		author:  GMKanat
 * 		created: 07.01.2021 20:37:56
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("input.txt", "r+", stdin);
	int n;
	cin >> n;
	long long s = 3;
	for(int i = 2; i <= n; i++){
		s *= 2;
	}	
	cout << s;
}