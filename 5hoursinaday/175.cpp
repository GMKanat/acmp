/**
 * 		author:  GMKanat
 * 		created: 03.01.2021 01:14:27
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

int main(){
	gg;
	int a, b;
	scanf("%d:%d", &a, &b);
	int d;
	if(a < 10){
		d = 20;
	}
	else if(a < 17){
		d = 24;
	}
	else if(a < 20){
		d = 24 + 5;
	}
	else d = 24 + 10;
	cout << (d-a)*60 - b;
}