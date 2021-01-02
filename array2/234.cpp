/*
	author: GMKanat
	created: 19.12.2020 23:45
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n, m, t;
	cin >> n >> m >> t;
	char q[250][250];
	while(t--){
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		q[a][b] = '*';
		
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			int cnt = 0;
			if(q[i][j] != '*'){
				for(int p = i-1; p <= i+1; p++){
					for(int l = j-1; l <= j+1; l++){
						if(q[p][l] =='*'){
							cnt++;
						}
					}
				}	
				if(cnt == 0) q[i][j]='.';
				else q[i][j] = cnt+'0';
			}
			
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << q[i][j];
		}
		cout << endl;
	}
}