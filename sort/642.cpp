/*
	author: GMKanat
	created: 21.12.2020 13-48
*/

#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);freopen("output.txt", "w+", stdout);
int main(){
	gg;
	int a, b;
	cin >> a >> b;
	int q[a];
	for(int i = 0; i < a; i++){
		cin >> q[i];
	}
	sort(q, q+a);
	int cnt = 0;
	int s = 0;
	for(int i = 0; i < a; i++){
		s += q[i];
		if(s>b){
			cout << cnt; return 0;
		}
		cnt++;
	}
	cout << cnt;
}