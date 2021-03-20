#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)



int main(){
	Speed;
	int l, m, n;
	cin >> l >> m >> n;
	map<vector<int>, int> mp;
	for(int i = 0; i < m; i++){
		int k;
		cin >> k;
		vector<int> temp(l);
		for(int &x: temp){
			cin >> x;
		}
		mp[temp] = k;
	}	
	int ok = 0, bad = 0;
	for(int i = 0; i < n; i++){
		vector<int> q(l);
		for(int &x: q){
			cin >> x;
		}
		if(mp.find(q) == mp.end()){
			cout << "-\n";
			bad++;
		}
		else{
			cout << mp.find(q)->second << "\n";
			ok++;
		}
	}
	cout << "OK=" << ok << " BAD=" << bad << "\n";
}