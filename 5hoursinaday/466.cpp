/**
 * 		author:  GMKanat
 * 		created: 02.01.2021 14:14:49
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);
int getNum(int n){
	if(n == 0) return 0;
	if(n == 1) return 1;
	if(n%2 == 0) return getNum(n/2);
	return getNum(n/2)+getNum(n/2+1);
}


int main(){
	gg;
	int n;
	cin >> n;
	cout << getNum(n);
}