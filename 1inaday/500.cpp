/**
 * 		author:  GMKanat
 * 		created: 06.01.2021 15:53:06
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("input.txt", "r+", stdin);
	int t;
	cin >> t;
	vector<pair<int,int>> v(t);
	for(int i =  0; i < t; i++){
		cin >> v[i].first >> v[i].second;
	}	
	sort(v.begin(), v.end());
	int mini = INT_MIN;
	
}