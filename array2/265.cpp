/*
	author: GMKanat
	created: 19.12.2020 15:11
*/

#include <bits/stdc++.h>
using namespace std;
int q[9][9];
int main(){

	int t; cin >> t;
	int p=4*t;
	while(t--){
		int a, b;
		cin >> a >> b;
		q[a][b] = 1;
	}
	
	for(int i = 1; i < 8; i++){
		for(int j = 1; j < 8; j++){
			if(q[i][j] == 1 && q[i][j+1] == 1){
				p-=2;
			}
			
		}
	}
	
	for(int i = 1; i < 8; i++){
		for(int j = 1; j < 8; j++){
			if(q[i][j] == 1 && q[i+1][j] == 1){
				p-=2;
			}
		}
	}
	cout << p;
}