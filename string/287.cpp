#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
		int n;
	cin >> n;
	string s;
	cin >> s;


	map <string, int> mp;
	for(int i = 0; i < t-n +1; i++){
		string k = s.substr(i, n);
	
		mp[k] = 1;
	}
	
	cout << mp.size() << endl;

}