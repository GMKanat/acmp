#include <bits/stdc++.h>

using namespace std;



int main(){
	string s;
	cin >> s;
	int cnt = 1;
	int p = 0;
	while(cnt != -1){

		for(int i = 0; i < s.size(); i++){
		cnt += s[i] - '0';
		}
		if(cnt > 9){
			string s = to_string(cnt);
			
			p++;
			cout << cnt << endl;
			cnt = 0;
		}
		else {
			cout << cnt;
			cnt = -1;
		}

	}
	
	cout << cnt << endl;
} 