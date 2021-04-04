/**
 * 		author:  GMKanat
 * 		created: 05.01.2021 00:15:00
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("input.txt", "r+", stdin);
	int t;
	cin >> t;
	vector<int> v;
	int x;
	for(int i = 0; i < t; i++){
		cin >> x;
		v.push_back(x);
	}
	next_permutation(v.begin(), v.end());
	for(int i = 0; i < t; i++){
		cout << v[i] << " ";
	}
}

