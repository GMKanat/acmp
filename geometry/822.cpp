/**
 * 		author:  GMKanat
 * 		created: 22.12.2020 21:48:09
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

int main(){
	gg;
	double x1, y1, x2, y2, x3, y3;
	cin >>  x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double a = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	double b = sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
	double c = sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
	double p = (a + b + c)/2;
	double s = sqrt(p*(p - a)*(p - b)*(p - c));
	cout.precision(1);
	cout << fixed << s;
}