/**
 * 		author:  GMKanat
 * 		created: 04.01.2021 14:37:04
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);
int x, y, z;
int main(){
	gg;
	int n;
	cin >> n;
	char c;
	int a;
	
	while(n--){
		cin >> c >> a;
		if(c  == 'X')
			x += a;
		else if(c == 'Y')
			y += a;
		else
			z += a;
	}

	y = y + x;
	z = z - x;
	if(z >= 0 && y >= 0){
		cout << abs(y + z);
		return 0;
	}
	if(z <= 0 && y <= 0){
		cout << abs(y + z);
		return 0;
	}
	if(z >= 0 && y <= 0){
		cout << abs(abs(z)-abs(y)) + min(abs(z), abs(y));
		return 0;
	}
	if(z <= 0 && y >= 0){
		cout << abs(abs(z)-abs(y)) + min(abs(z), abs(y));
		return 0;
	}
}