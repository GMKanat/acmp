/*
	author: GMKanat
	created: 19.12.2020 21:16
*/

#include <bits/stdc++.h>
using namespace std;



int main(){
	int n, m;
	cin >> n >> m;
	char q[n][m];
	char w[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> q[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> w[i][j];
		}
	}
	string k;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(q[i][j] != '.' && q[i][j] != w[i][j]){
				k+=q[i][j];
			}
		}
	}
	string a, t;
	for(int i = 0; i < k.size(); i++){
		if(k[i]>96){
			a+=k[i];
		}
		else t+=k[i];
	}
	sort(t.begin(), t.end());
	sort(a.begin(), a.end());
	cout << a.size()+t.size() << endl << a << t;
}
