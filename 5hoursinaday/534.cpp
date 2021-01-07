/**
 * 		author:  GMKanat
 * 		created: 06.01.2021 17:58:07
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("input.txt", "r+", stdin);
	int t;
	cin >> t;
	int cnt[t+1];
	for(int i = 1; i <= t; i++){
		cin >> cnt[i];
	}
	int k;
	cin >> k;
	int a;
	while(k--){
		cin >> a;
		cnt[a]--; 
	}
	for(int i = 1; i <= t; i++){
		if(cnt[i] < 0){
			cout << "yes\n";
		}
		else cout << "no\n";
	}
}