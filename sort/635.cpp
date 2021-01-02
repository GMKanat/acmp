/**
 * 		author:  GMKanat
 * 		created: 22.12.2020 20:28:54
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

bool cmp(pair<pair<int,int>,int> v1, pair<pair<int,int>,int> v2){
	if(v1.first.second!=v2.first.second)
		return v1.first.first<v2.first.second;
	else if(v1.second != v2.second)
		return v2.second>v1.second;
	else return v1.first.first>v2.first.first;
}

int main(){
	gg;
	vector<pair< pair<int,int>,int>> v1;
	int a, b;
	cin >> a >> b;
	double s = 0;
	int cnt = 0;
	while(a--){
		int x, y, z;
		cin >> x >> y >> z;
		s += y;
		cnt++;
		v1.push_back({{x, y}, z});
	}
	s /=cnt;
	s = ceil(s);
	cout << s << endl;
	for(int i = 0; i < v1.size(); i++){
		cout << i << " ";
		if(s > v1[i].first.second){
			v1.erase(v1.begin()+i);
			i--;
		}
	}
	cout << endl;
	while(b--){
		int x, y, z;
		cin >> x >> y >> z;
		if(y > 0) v1.push_back({{x, y}, z});	
	}
	sort(v1.begin(), v1.end(), cmp);
	cout << v1.size() << endl;
	for(int i = 0; i <v1.size(); i++){
		cout << v1[i].first.first << " ";
	}

}
