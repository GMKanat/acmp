/*
	author: GMKanat
	created: 19.12.2020 14:46
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	cin >> b >> a;
	char q[a][b];
	char w[a][b];
	for(int i = 0; i < a; i++){
		for(int j = 0; j < b; j++){
			cin >> q[i][j];
		}
	}

	for(int i = 0; i < a; i++){
		for(int j = 0; j < b; j++){
			cin >> w[i][j];
		}
	}
	char e[2][2];
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cin >> e[i][j];	
		}
	}
	for(int i = 0; i < a; i++){
		for(int j = 0; j < b; j++){
			cout << e[q[i][j]-'0'][w[i][j]-'0'];
		}
		cout << endl;
	}

}