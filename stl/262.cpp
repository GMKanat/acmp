#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)



int main(){
	Speed;
	int n;
	cin >> n;
	priority_queue<int, vector<int>, greater<int>> pq;
	for(int i = 0, x; i < n; i++){
		cin >> x;
		pq.push(x);
	}
	ll ans = 0;
	while(pq.size() > 1){
		int x = pq.top();
		pq.pop();
		x += pq.top();
		pq.pop();
		ans += x;
		pq.push(x);
	}
	ll per = ans*5;
	printf("%.02lf\n", ((double)per)/100.0);
}