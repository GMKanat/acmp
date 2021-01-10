/**
 * 		author:  GMKanat
 * 		created: 07.01.2021 17:32:23
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("input.txt", "r+", stdin);
	int t;
	cin >> t;
	int n;
	while(t--){
		cin >> n;
		long long s = 1;
		for(int i = 2; i < n; i++){
			s += pow(i,3);
		}	
		cout << s + pow(n,3);
	}
}