/**
 * 		author:  GMKanat
 * 		created: 01.01.2021 20:31:44
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

int main(){
	gg;
	int n;
	double q;
	cin >> n >> q;
	for(int i = 0; i < n; i++){
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		const double EPS = 3e-16;
		if(sqrt(x2*x2+y2*y2) > q*sqrt(x1*x1 + y1*y1)*(1+EPS)){
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
}