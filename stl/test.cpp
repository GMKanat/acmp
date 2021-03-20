#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
struct Event {
	int first;
	int second;
	bool operator<(const Event&b) const{
		if(first != b.first) return first < b.first;
		return second < b.second;
	}
};



int main(){
	Speed;
	int n;
	cin >> n;
	vector<Event> k;
	for(int i = 0; i < n; i++){
		int x, y;
		cin >> x >> y;
		k.push_back({x, y});
	}
	sort(k.begin(), k.end());
	for(const Event&e: k){
		cout << e.first << " " << e.second << "\n";
	}
	set<int> st;
	for(int i = 0; i < 5; i++){
		st.insert(i);
	}

}