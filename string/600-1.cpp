#include <bits/stdc++.h>
using namespace std;
int is[3];
bool check(string s){
	int cnt = 0;	
	string m = s;
	sort(m.begin(), m.end());
	if(m != s)
		return false;

	for(int i = 0; i < s.size()-1; i++){
		if(s[i] == s[i+1]){
			cnt++;
		}
		else break;
	}
	cnt++;
	string a = s.substr(0, cnt);
	string b = s.substr(cnt, cnt);
	string c = s.substr(2*cnt);

	if(a.size() != b.size() || a.size() != c.size())
		return false;
	return true;

}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		check(s)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
}