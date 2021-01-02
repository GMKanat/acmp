#include <iostream>
using namespace std;
char a[51][51];
int cnt;
int b[51][51];
int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cin >> a[i][j];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(a[i][j] == 'C') cnt++;
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(cnt > 0){
				cout << 1;
				cnt--;
			}
			else cout << 2;

		}
		cout << endl;
	}
		
}