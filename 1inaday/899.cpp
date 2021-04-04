/**
 * 		author:  GMKanat
 * 		created: 05.01.2021 13:11:59
**/
#include <bits/stdc++.h>
using namespace std;
bool pairs(char a, char b){
	if(a == '(' && b == ')'){
		return true;
	}
	if(a == '[' && b == ']'){
		return true;
	}
	if(a == '{' && b == '}'){
		return true;
	}
	return false;
}

int main(){
	freopen("input.txt", "r+", stdin);
	string s;
	while(cin >> s){
		vector<char> v;
		v.push_back(s[0]);
		for(int i = 1; i < s.size(); i++){
			if(pairs(v.back(), s[i])){
				v.pop_back();
			}
			else{
				v.push_back(s[i]);
			}
		}	
		v.size() == 0?cout<<0:cout<<1;
	}
}