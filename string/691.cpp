#include <bits/stdc++.h>

using namespace std;
bool checkL(char s){
	vector<char> v;
	v.push_back('A');
	v.push_back('B');
	v.push_back('C');
	v.push_back('E');
	v.push_back('H');
	v.push_back('K');
	v.push_back('M');
	v.push_back('O');
	v.push_back('P');
	v.push_back('T');
	v.push_back('X');
	v.push_back('Y');
	for(int i = 0; i < v.size(); i++){
		if(s == v[i]){
			return true;
			break;
		}
	}
	return false;
}
bool checkN(char n){
	int k = n - '0';
	if(k < 10 && k > -1){
		return true;
	}
	return false;
}
int main(){
	int t;
	cin >> t;

	while(t--){
		string s;
		cin >> s;
		if(s.size() != 6){
			cout << "No" << endl; continue;
		} 
		if(checkL(s[0]) && checkL(s[4]) && checkL(s[5]) && checkN(s[1]) && checkN(s[2]) && checkN(s[3])){
			cout << "Yes" << endl;
		}
		else cout << "No" << endl;
	}
}