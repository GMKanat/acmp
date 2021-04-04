/**
 * 		author:  GMKanat
 * 		created: 03.01.2021 23:38:43
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);
bool checkCpp(string s){
	for(int i = 0; i < s.size(); i++){
		if(isupper(s[i])) 
			return false;
	}
	return true;
}
bool checkJava(string s){
	if(isupper(s[0])) 
		return false;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '_')
			return false;
	}
	return true;
}



int main(){
	gg;
	string s;
	cin >> s;
	if(s[0] == '_' || s[s.size() - 1] == '_'){
		cout << "Error!";
		return 0;
	}
	for(int i = 0; i < s.size()-1; i++){
		if(s[i] == '_' && s[i] == s[i + 1]){
			cout << "Error!";
			return 0;
		}
	}
	//name _(no)
	//name _(yes)
	//E 
	int a = checkCpp(s);
	int b = checkJava(s);
	if(!a && !b) cout << "Error!";
	if(a && b) cout << s;
	if(a && !b){
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '_'){
				s[i+1] -= 32;
				cout << s[i+1];
				i++;	
			}
			else{
				cout << s[i];
			}
		}
	}
	if(!a && b){
		for(int i = 0; i < s.size(); i++){
			if(isupper(s[i])){
				cout << '_';
				s[i] += 32;
				cout << s[i];
			}
			else{
				cout << s[i];
			}
		}
	}
}