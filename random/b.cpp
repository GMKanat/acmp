/**
 * 		author:  GMKanat
 * 		created: 07.01.2021 23:02:19
**/
#include <bits/stdc++.h>
using namespace std;
int check(string h){
	int i = 0, was = 0;
	string k;
	while(1){
		k = h.substr(0, i);
		if(k[i] != k[k.size() - 1]){
			return i + 1;
		}
		if(k[0] != k[i]){
			was = 1;
		}
	}
}


int main(){
	freopen("input.txt", "r+", stdin);
	int t; cin >> t;
	string s;
	int i = 0;
	while(t--){
		cin >> s;
		
	}
}