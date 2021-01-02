/*
	author: GMKanat
	created: 19.12.2020 18:40
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	char q[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> q[i][j];
		}
	}
	int xn = 101, yn = 101, xm = 0, ym = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(q[i][j] == '*'){
				if(i < xn) xn = i;
				if(j < yn) yn = j;
 			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(q[i][j] == '*'){
				if(i > xm) xm = i;
				if(j > ym) ym = j;
 			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(i >= xn && i <= xm && j >=yn && j<=ym){
				q[i][j] ='*';
			}
			cout << q[i][j];
		}
		cout << endl;
	}
		
}