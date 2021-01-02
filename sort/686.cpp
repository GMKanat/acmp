/**
 * 		author:  GMKanat
 * 		created: 23.12.2020 00:04:19
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

int main(){
	gg;
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	vector<int>v1;
	vector<int>v2;
	for(int i = 0; i < n; i++){
		if(!(i%2)) v1.push_back(a[i]);
		else v2.push_back(a[i]);
	}
	for(auto i: v1){
		cout << i << " ";
	}

	for(int i = v2.size()-1; i >=0; i--){
		cout << v2[i] << " ";
	}
}