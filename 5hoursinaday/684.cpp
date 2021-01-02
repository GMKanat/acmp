/**
 * 		author:  GMKanat
 * 		created: 02.01.2021 16:18:39
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

int main(){
	gg;
	char a, b;
	int x1, x2;
	cin >> a >> x1 >> b >> x2;
	int y1 = a - 'a' + 1;
	int y2 = b - 'a' + 1;
	int x = x2 - x1;
	int y = y2 - y1;
	cout << x << " " << y << endl;
	if((x+y)%2 == 0 && x >= y && x >= -y){
		cout << "YES";
	}
	else cout << "NO";
}