#include <bits/stdc++.h>
using namespace std;


int main(){
	string s;
	cin >> s;
	int n;
	cin >> n;
	if(n>0){
		if(s.size()*n >=1023){
			for(int i = 0; i < 1023/s.size(); i++){
				cout << s;
			}
			for(int i = 0; i < 1023%s.size(); i++){
				cout << s[i];
			}
		}
		else{
			for(int i = 0; i < n; i++){
			cout << s;
			}
		}
		
		return 0;
	}
	else{
		string k;
		int t = abs(n);
		for(int i = 0; i < s.size()/t; i++){
			k += s[i];
		}
		string m = k;
		
		for(int j = 1; j < t; j++){
			k += m;
		}
		
		if(k == s){
			cout << m;
			return 0;
		} 
	}
	cout << "NO SOLUTION";
}