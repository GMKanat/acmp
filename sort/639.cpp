/*
	author: GMKanat
	created: 21.12.2020 15:12
*/

#include <bits/stdc++.h>
using namespace std;


bool cmp(pair<double,string> v1,pair<double,string> v2){
	 return v2.first < v1.first;

}
#define gg freopen("input.txt", "r+", stdin);freopen("output.txt", "w+", stdout);
int main(){
	gg;
	int t;
	cin >> t;
	vector<pair<double,string>>v;
	while(t--){
		int a;
		cin >> a;
		while(a--){
			double k;
			cin >> k;
			string s;
			cin >> s;
			v.push_back({k, s});
		}
	}
	sort(v.begin(), v.end(), cmp);
	cout << v.size() << endl;
	for(auto i: v){
		printf("%4.2f", i.first);
		cout << " " << i.second;
		cout << endl;
	} 
}