#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
	Speed;
	int n, k;
	cin >> n >> k;
	vector<pair<int,int>> v(n);	
	for(int i = 0; i < n; i++){
		cin >> v[i].first >> v[i].second;
	}
	sort(v.rbegin(), v.rend());
	for(int i = 0; i < n; i++){
		cout << v[i].first << " "<< v[i].second << "\n";
	}
	priority_queue<int,vector<int>, greater<int>> pq;
	ll maxs = 0;
	for(int i = 0; i < n; i++){
		pq.push(v[i].second);
		if((int)pq.size() > k){
			pq.pop();
		}
		if((int)pq.size() == k){
			maxs = max(maxs, 1ll*v[i].first*pq.top());
		}
	}
	cout << maxs << "\n";
}