/*
	author: GMKanat
	created: 19.12.2020 18:40
*/

#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);freopen("output.txt", "w+", stdout);
int main(){
	gg;
	int t;
	cin >> t;
	int q[t];
	for(int i = 0; i < t; i++){
		cin >> q[i];
	}
	int s = 0, k = 0;
	sort(q, q+t);
	for(int i = 0; i < t/2; i++){
		s += q[i];
	}
	for(int i = t/2; i < t; i++){
		k += q[i];
	}
	cout << k - s;
}