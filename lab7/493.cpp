#include <iostream>
using namespace std;
char a[111][111];
int main(){
	int n, m;
	cin >> n >> m;

	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> a[i][j];
	int cnt = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == '.' && a[i + 1][j] != '*' && a[i][j + 1] != '*' && a[i-1][j] != '*' && a[i][j - 1] != '*'){
				cnt++;
		
			}
		}
	}
	cout << cnt << endl;
		
}