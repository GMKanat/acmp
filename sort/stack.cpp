/*
	author: GMKanat
	created: 21.12.2020 21:31
*/

#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);freopen("output.txt", "w+", stdout);
int main(){

	int t;cin>>t;t++;
	stack <string> st;
	while(t--){
		string s, x;
		getline(cin, s);
		if(s[0] == 'a'){
			st.push(s.substr(4));
		}
		else if(s[0] == 'p'){
			cout << st.top()<<endl;
		}
		else if(s[0] == 'd'){
			st.pop();
		}
	}
}