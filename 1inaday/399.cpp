/**
 * 		author:  GMKanat
 * 		created: 02.01.2021 22:49:20
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

int main(){
	gg;
	int sizeI, sizeJ;
	scanf("%d %d ", &sizeI, &sizeJ);
	vector <vector <int>> a(sizeI, vector<int>(sizeJ)); //
	const int WALL = -1;
	for(int i = 0; i < sizeI; i++){
		for(int j = 0; j < sizeJ; j++){
			char c;
			scanf("%c", &c);
			if(c == '@'){
				a[i][j] == WALL;
			}
			else if(c == ' '){
				a[i][j] = 0;
			}
			
			else{
				throw 1;
			}
			cout << a[i][j];
		}
		scanf(" ");
		cout << endl;
	}
	/*for(int i = 0; i < sizeI; i++){
		for(int j = 0; j < sizeJ; j++){
			cout << a[i][j];
		}
		cout << endl;
	}*/
	int i = 1;
	int j = 1;
	int di = 1;
	int dj = 0;
	int oneCount = 0;
	int cnt = 0;
	while(1){
		if(a[i][j] == 1){
			oneCount--;
		}
		a[i][j]++;	
		if(a[i][j] == 1){
			oneCount++;
		}
		if(oneCount == 0){
			cout << -1;
			return 0;
		}
		int mini = min(a[i+1][j], min(a[i-1][j], min(a[i][j+1], a[i][j-1])));
		if(mini == WALL){
			cout << -1;
			return 0;
		}
		if(a[i+1][j] == mini){
			di = 1;
			dj = 0;
		}
		else if(a[i][j+1] == mini){
			di = 0;
			dj = 1;
		}
		else if(a[i-1][j] == mini){
			di = -1;
			dj = 0;
		}
		else if(a[i][j-1] == mini){
			di = 0;
			dj = -1;
		}
		i += di;
		j += dj;
		cnt++;
		if(i == sizeI - 2 && j == sizeJ - 2){
			break;
		}
	}
	cout << cnt; 
	return 0;

}