/**
 * 		author:  GMKanat
 * 		created: 22.12.2020 23:39:48
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

int main(){
	gg;
	int n;
	cin >> n;
	int a[n];
	int min = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[min] > a[i]){
			min = i;
		}
	}
	for(int i = 0; i < n; i++){
		cout << a[(min+i)%n] << " ";
	}
}