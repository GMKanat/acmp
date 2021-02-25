#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)



int main(){
	Speed;
	int n;
	cin >> n;
	n++;
	string s;
	string a, b, c;
	map<string,int> mp, mp1;
	int cnt = 1;
	int mx = 0;
	while(n--){

		getline(cin, s);
		stringstream ss(s);
		ss >> a;
		ss >> b;
		while(ss >> c){
			c = c;
		}
		if(c == "w"){
			mp[b]++;
			if(mp1.count(b) == 0){
				mp1[b] = cnt;
				cnt++;
			}
			mx = max(mx, mp[b]);
		}
	}
	// for(auto &x: mp1){
	// 	cout << x.first << " " << x.second << "\n";
	// }
	if(mx == 1){
		cout << "UNIQUE!";
		return 0;
	}
	vector<pair<int, string>> vp;
	for(auto &x: mp){
		if(x.second == mx){
			vp.push_back({mp1[x.first], x.first});
		}
	}
	if(vp.size() == 0){
		cout << "NO DATA!";
		return 0;
	}
	sort(vp.begin(), vp.end());
	for(int i = 0; i < (int)vp.size(); i++){
		if(i == (int)vp.size()-1){
			cout << vp[i].second;
			continue;
		}
		cout << vp[i].second << ",";
	}
}