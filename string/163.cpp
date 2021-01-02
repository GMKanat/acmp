#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	if(isdigit(s[0]) && s[2] == 'x'){
		if(s[1] == '+'){
			int m = s[4]- s[0];
			cout << m;
		}
		if(s[1] == '-'){
			int m = s[0] - s[4];
			cout << m;
		}
	}
	else if(s[0] == 'x'){
		if(s[1] == '+'){
	
			int m = s[4]- s[2];
			cout << m;
		}
		if(s[1] == '-'){
		
			int m = s[2] + s[4]-'0'-'0';
			cout << m;
		}
	}
	else{
		if(s[1] == '+'){
			
			int m = s[0] + s[2]-'0'-'0';
			cout << m;
		}
		else{
			int m = s[0] - s[2];
			cout << m;
		}
	}
}