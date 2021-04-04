/**
 * 		author:  GMKanat
 * 		created: 03.01.2021 13:24:32
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

int main(){
	gg;
	int a, b;
	cin >> a >> b;
	vector<char> prev(b+1, '.');
	vector<char> cur(b+1, '.');
	int cnt = 0;
	for(int i = 1; i <= a; i++){
		for(int j = 1; j <= b; j++){
			cin >> cur[j];
			if(prev[j] == '.' && cur[j] == '#' && cur[j-1] == '.'){
				cnt++;
			}
		}
		cur.swap(prev);
	}
	cout << cnt;
}