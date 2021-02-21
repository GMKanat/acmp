#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)



int main(){
	Speed;
	int n;
	cin >> n;

	unordered_map<string,int> mp;
	for(int i = 1; i <= n; i++){
		string s;
		cin >> s;
		mp[s]++;
	}
	vector<int> v;
	int mx = 0;
	for(auto &j: mp){
		// cout << j.first << " " << j.second << "\n";
		v.push_back(j.second);
		mx = max(mx, j.second);
	}
	reverse(v.begin(), v.end());

	for(int i = mx; i >= 1; i--){
		for(int j = 0; j <(int) v.size(); j++){
			if(v[j] >= i){
				cout << char(88);
			}
			else{
				cout << char(46);
			}
		}
		cout << endl;
	}
}