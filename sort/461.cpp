/**
 * 		author:  GMKanat
 * 		created: 22.12.2020 23:54:15
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
	sort(a, a+n);
	int s = 0;
	int k = ceil((double)(n+1)/2);
	for(int i = 0; i < k; i++){
		s+= ceil((double)(a[i]+1)/2);	
	}

	cout << s;
}