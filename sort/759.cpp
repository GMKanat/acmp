/*
	author: GMKanat
	created: 21.12.2020 14:00
*/

#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);freopen("output.txt", "w+", stdout);
int q[10001];
int main(){
	gg;
	int a, b;
	cin >> a >> b;
	
	for(int i = 0; i < a; i++){
		cin >> q[i];
	}
	int s = 0;
	sort(q, q+a);
	int cnt = 0;
	for(int i = a - 1; i > -1; --i){
		if(q[i]>0 and cnt < b){
			s += q[i];
			cnt++;
		}
		

	}
	cout << s;
}