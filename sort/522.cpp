/*
	author: GMKanat
	created: 19.12.2020 18:40
*/

#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);freopen("output.txt", "w+", stdout);
int main(){
	gg;
	int n, m;
	cin >> n >> m;
	int a[n], b[m];

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	for(int i = 0; i < m; i++){
		cin >> b[i];
	}

	if(n <= m){
		int cnt = 0;
		for(int i = 0; i < m; i++){
			
			for(int j = 0; j < n; j++){
				if(b[i] == a[j]){
					cnt++;
					break;
				}
			}
		}
		m==cnt?cout<<1:cout<<0;
	}
	if(n > m){
		int cnt = 0;
		for(int i = 0; i <n; i++){
			
			for(int j = 0; j < m; j++){
				if(b[j] == a[i]){
					cnt++;
					break;
				}
			}
		}
		n==cnt?cout<<1:cout<<0;
	}



}