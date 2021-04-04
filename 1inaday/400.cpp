/**
 * 		author:  GMKanat
 * 		created: 03.01.2021 01:33:15
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

int main(){
	gg;
	vector<pair<int,int>>v;
	int k = 6;
	int a, b;
	while(k--){
		cin >> a >> b;
		if(author)
		if(a > b) swap(a, b);
		v.push_back({a,b});
	}
	sort(v.begin(), v.end());
	
	if(v[0].first != v[1].first || v[2].first != v[3].first || v[1].first != v[2].first){
		cout << "IMPOSSIBLE"; return 0;
	}
	if(v[0].second != v[1].second || v[5].first != v[4].first || v[1].second != v[4].first){
		cout << "IMPOSSIBLE"; return 0;
	}
	if(v[2].second != v[3].second || v[5].second != v[4].second || v[3].second != v[4].second){
		cout << "IMPOSSIBLE"; return 0;
	}
	cout << "POSSIBLE";
}