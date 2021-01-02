/**
 * 		author:  GMKanat
 * 		created: 22.12.2020 21:36:58
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

int main(){
	gg;
	double x, y, a, b;
	cin >> x >> y >> a >> b;
	double s = sqrt((x-a)*(x-a)+(y-b)*(y-b));
	printf("%.5f",s);
}