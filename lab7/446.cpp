#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	char a[n][m];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> a[i][j];
	int b[n][m];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> b[i][j];
	int cnt = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == 'G' && b[i][j] == 2 || b[i][j] == 3 || b[i][j] == 6 || b[i][j] == 7){
				cnt++;
			}
			else if(a[i][j] == 'B' && b[i][j] == 1 || b[i][j] == 3 || b[i][j] == 5 || b[i][j] == 7){
				cnt++;
			}

			else if(a[i][j] == 'R' && b[i][j] == 4 || b[i][j] == 5 || b[i][j] == 6 || b[i][j] == 7){
				cnt++;
			}
			else if(a[i][j] == '.') cnt++;
			else {
				cout << "NO";
				return 0;
			}
		}
	}
	cout << "YES";
	
}