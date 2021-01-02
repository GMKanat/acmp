/*
	author: GMKanat
	created: 21.12.2020 22:27
*/

#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);freopen("output.txt", "w+", stdout);
int main(){
	gg;
	int n;
	cin >> n;
	int q[n];
	int max, x, min, y;
	int cnt = 0;
	for(int i = 0; i < n; i++){
		cin >> q[i];
		if(q[i]>0) cnt+=q[i];
	}

	max = -1000;
	min = 1000;
	for(int i = 0; i < n; i++){
		if(max < q[i]){
			max = q[i];
			x = i;
		} 
		if(min > q[i]){
			min = q[i];
			y = i;
		}
	}
	if(x > y) swap(x,y);
	int s = 1;
	for(int i = x+1; i < y; i++){
		
		s*=q[i];
	}
	cout << cnt%30000<< " " << s%30000;
}