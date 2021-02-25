#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)



int main(){
	Speed;
	int n;
	cin >> n;
	vector<pair<int,int>> vp(n);
	for(int i = 0; i < n; i++){
		cin >> vp[i].first >> vp[i].second;
	}	
	sort(vp.begin(), vp.end(), greater<pair<int,int>>());
	
	vector<int> s;
	s.push_back(vp[0].second);
	if(2 < n){
		s.push_back(vp[1].second + vp[0].second);
	}
    for(int i = 2; i < (int)vp.size()-1; ++i){
        s.push_back(min(s[i - 1],s[i - 2]) + vp[i].second); 
        // cout << s.back() << " " << vp[i].second << "\n";
        // cout << s.back() << " ";
    }
    cout << s.back();
}