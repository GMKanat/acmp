/*
	author: GMKanat
	created: 20.12.2020 00:38
*/

#include <bits/stdc++.h>
using namespace std;
#define read freopen("input.txt", "r+", stdin);freopen("output.txt", "w+", stdout);
int maxy[1000];
int main(){
	int minx[1000]={1000};

	read;
	int a,b;
	cin >> a >> b;
	int q[a+1][b+1];
	for(int i = 0; i < b; i++){
		minx[i] = 1000;
	}
	for(int i = 0; i < a; i++){
		for(int j = 0; j < b; j++){
			cin >> q[i][j];
		}
	}
	
	for(int i = 0; i < a; i++){
		for(int j = 0; j < b; j++){
			if(q[i][j] < minx[i])
				minx[i]=q[i][j];
		}
	}

	for(int j = 0; j < b; j++){
		for(int i = 0; i < a; i++){
			if(q[i][j] > maxy[j])
				maxy[j]=q[i][j];
		}
	}
	int cnt = 0;
	

	for(int i = 0; i < a; i++){
		for(int j = 0; j < b; j++){
			if(q[i][j] == minx[i] && q[i][j] == maxy[j])
				cnt++;
		}
	}
	
	
	cout << cnt;
}