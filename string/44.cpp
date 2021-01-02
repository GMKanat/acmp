#include <bits/stdc++.h>

using namespace std;


int main(){

	string s;
	cin >> s;
	int cnt = 0;
	string k = "<--<<";
	string l = ">>-->";
	if(s.size() < 5){
		cout << 0;
		return 0;
	}
	for(int i = 0; i < s.size()-4; i++){
		string m = s.substr(i, 5);
		if(m == k || m == l)cnt++;
	}
	cout << cnt;
	
}