#include <bits/stdc++.h>
using namespace std;

string step(string s){
	for(int i = 0; i < s.size() - 1; i++){
		if(s[i] < s[i + 1]){
			s.erase(s.begin()+i);
			break;
		}
	}
	return s;
}

int main(){
	string s;
	cin >> s;
	string a = s;
	int k = 0;
	while(k  < 2){
		s = step(s);
		k++;
	}
	int m = a.size() - s.size();
	if(m == 0){
		s.pop_back();
		s.pop_back();
	}
	if(m == 1){
		s.pop_back();
	}
	cout << s;
}