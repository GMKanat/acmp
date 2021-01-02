/*
	author: GMKanat
	created: 19.12.2020 14:14
*/

#include <bits/stdc++.h>
using namespace std;
int n, m;
int q[101][101]; 
int main(){
	cin >> n >> m;
	int t;
	cin >> t;
	int cnt = 0;
	while(t--){
		int x, y, a, b;
		cin >> x >> y >> a >> b;
		x++;
		y++;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				if(i >= x && i <= a && y <= j && b >= j){
					q[i][j] = 1;
				}
			}
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(q[i][j] == 1)
				cnt++;
		}
	}
	cout << n*m - cnt;
}
