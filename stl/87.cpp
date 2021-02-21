#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
	Speed;
	string s;
	set<string> st;
	vector<string> ss;
	while(getline(cin, s)){
		if(s == "ENDOFINPUT"){
			break;
		}
		st.insert(s);
		ss.push_back(s);
	}
	int ans = 0;
	for(auto &t: ss){
		for(int i = 0; i < t.size(); i++){
			string l = t.substr(0, i);
			string r = t.substr(i);
			// cout << l << " " << r << '\n';
			if(st.find(l) != st.end() && st.find(r) != st.end()){
				ans++;
				break;
			}
		}
	}	
	cout << ans << "\n";
}