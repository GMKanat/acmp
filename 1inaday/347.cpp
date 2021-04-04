/**
 * 		author:  GMKanat
 * 		created: 03.01.2021 21:10:38
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

int main(){
	gg;
	int x;
	map<int, int> mp;
	vector<pair<int,int>> v;
	for(int i = 0; i < 5; i++){
		cin >> x;
		mp[x]++;
	}
	for(auto i: mp){
		v.push_back({i.second, i.first});
	}
	sort(v.begin(), v.end());
	if(v.size() == 1){
		cout << "Impossible";
		return 0;
	}
	else if(v.size() == 2){
		if(v[1].first == 4){
			cout << "Four of a Kind";
			return 0;
		}
		else {
			cout << "Full House";
			return 0;
		} 
	}
	else if(v.size() == 3){
		if(v[2].first == 3){
			cout << "Three of a Kind";
			return 0;
		}
		else {
			cout << "Two Pairs";
			return 0;
		}
	}
	else if(v.size() == 4){
		cout << "One Pair";
		return 0;
	}
	else if(v.size() == 5){
		int i = 0;
		while(i < 4){
			
			if((v[i].second + 1) != v[i+1].second){
				cout << "Nothing";
				return 0;
			}
			i++;
		}
	}
	cout << "Straight";
	return 0;
}