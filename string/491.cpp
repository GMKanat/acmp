#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int was = 0, check = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] != s[s.size()-i-1]){
			was = 1;
		}
		if(s[0] != s[i]){
			check = 1;
		}
	}
	if(!check) cout << "NO SOLUTION" << endl;
	else if(was) cout << s << endl;
	else if(!was) cout << s.substr(0, s.size()-1);
}