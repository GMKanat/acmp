#include <bits/stdc++.h>
using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){

	string s;
	cin >> s;
	int cnt = 0;
	for(int i = 0; i < s.size()-1; i++){
		if(s[i] > s[i+1]){
			cout << "NO" << endl;
			break;
		}
	}
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '0'){
			cnt++;
		}
		else break;
	}
	string o = s.substr(0, cnt);
	cnt = 0;
	for(int i = o.size(); i <s.size(); i++){
		if(s[i] == '1'){
			cnt++;
		}
		else break;
	}
	if(cnt != o.size()){
		cout << "NO" << endl;
		break;
	}
	cnt = 0;
	for(int i = 2*o.size(); i <s.size(); i++){
		if(s[i] == '2'){
			cnt++;
		}
		else break;
	}
	if(cnt != o.size()){
		cout << "NO" << endl;
		break;
	}
	else{
		cout << "YES" << endl;
		break;
	} 
	}
}