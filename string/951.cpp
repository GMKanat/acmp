#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int cnt = 0;
	for(int i = 0; i < s.size(); i++){
		cnt++;
		if(s[i] == '1'){
			cout <<char(cnt + 'a' - 1);
			cnt = 0;
		}
		
	}
}