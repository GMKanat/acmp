/**
 * 		author:  GMKanat
 * 		created: 01.01.2021 21:12:21
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

int main(){
	gg;
	int n;
	cin >> n;
	int cnt = 0;
	int i = 0;
	while(1){
		if((n - i*3)%5 == 0){
			cnt = i;
			break;
		}
		i++;
	}
	cout << (n - cnt*3)/5 << " " << cnt;
}