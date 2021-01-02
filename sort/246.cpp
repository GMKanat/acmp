/**
 * 		author:  GMKanat
 * 		created: 22.12.2020 23:22:54
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

int main(){
	gg;
	int a, b, c, d = 0;
	cin >> a;
	cin >> b;
	for(int i = 1; i < a ; i++){
		cin >> c;
		if(b != c - 1){
			d++;
		}
		b = c;
	}
	cout << d << endl;
}