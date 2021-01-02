/**
 * 		author:  GMKanat
 * 		created: 22.12.2020 23:47:06
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

int main(){
	gg;
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		for(int j = 0; j < n; j++){
			if(a[j]==i)cout << j+1 << " ";
		}
	}
}