/*
	author: GMKanat
	created: 19.12.2020 13:05
*/



#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	int a[t][4];
	for(int i = 0; i < t; i++){
		cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
	}
	int x, y, d, b;
	cin >> x >> y >> d >> b;
	if(x > d) swap(x, d);
	if(y > b) swap(y, b);
	int cnt = 0;
	for(int i = 0; i < t; i++){
		int z, v, c, r;
		if(a[i][0] > a[i][2]) swap(a[i][0], a[i][2]);
		if(a[i][1] > a[i][3]) swap(a[i][1], a[i][3]);
		z = max(x, a[i][0]);
		c = max(y, a[i][1]);
		v = min(d, a[i][2]);
		r = min(b, a[i][3]);
		if(v > z && r > c){
			cnt += (v-z)*(r-c);
		}
	}
	cout << cnt << endl;

}
	