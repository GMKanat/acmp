/*
	author: GMKanat
	created: 21.12.2020 15:41
*/

#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);freopen("output.txt", "w+", stdout);
int main(){
	gg;
	string s;
	cin >> s;
	vector<pair<int,int>>v;
	for(int i = 0; i < s.size(); i++){
		v.push_back({s[i]-'A'+1, i+1});
	}
	sort(v.begin(), v.end());
	int cnt = 0;
	for(int i = 0; i < v.size(); i++){
		if(v[i].first> cnt){
			cnt++;
		}
		else{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES" << endl;
	for(int i = 0; i < v.size(); i++){
		cout << v[i].second << " ";
	}
}