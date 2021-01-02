#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int flag = 0, cnt = 0, was = 0;
	if(s[0] >= 'a' && s[0] <= 'z'){
			cout << "No";
			return 0;
		}
	for(int i = 0; i < s.size(); i++){
		
		 if(s[i]<'a' && s[i+1] < 'a'){
			cout << "No";
			return 0;
		}

		else if(s[i] < 'a'){
			cnt = 0;
		}
		else{
			cnt++;
			if(cnt > 3) {
			cout << "No";
			return 0;
			}
		}
	}
	cout << "Yes";
}