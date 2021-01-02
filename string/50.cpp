#include <bits/stdc++.h>
using namespace std;

int main(){
	string a, b;
	cin >> a >> b;
	vector<string> v;
	for(int i = 0; i < b.size(); i++){
		v.push_back(b.substr(i)+b.substr(0, i));
	}
	int cnt = 0;
	for(int i = 0; i < a.size()-b.size()+1; i++){
		int was = 0;
		string k = a.substr(i, b.size());
		for(auto j: v){
			if(k == j){
				was = 1;
				break;
			}
		}
		if(was)
			cnt++;
	}
	cout << cnt;
}