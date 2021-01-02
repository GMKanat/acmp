/*
	author: GMKanat
	created: 18.12.2020 21:52
*/
#include <bits/stdc++.h>
using namespace std;



int main(){
	int n, m;
	cin >> n >> m;
	char a[n][m];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> a[i][j];
	string px;
	int p;
	for(int i = 0; i < n; i++){
		px = ".";
		for(int j = 0; j < m; j++){
			cin >> p;
			if(p > 3) px += 'R';
			if(p % 2 == 1) px += 'B';
			if(p == 2 || p == 3 ||p == 6 ||p == 7) px+='G';
			if(px.find(a[i][j]) == string::npos){
				cout << "NO";
				return 0;
			}
		}
	}
	cout << "YES";
}

