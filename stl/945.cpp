#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)



int main(){
	Speed;
	int n, q;
	cin >> n >> q;
	ll a[n+1];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}	
	while(q--){
		ll x; 
		cin >> x;
		int l = -1, r = n + 1;
		bool ok = 0;
		while(l + 1 < r){
			int mid = (l + r) >> 1;
			if(a[mid] == x){
				ok = 1;
			}
			if(a[mid] > x){
				r = mid;
			}
			else{
				l = mid;
			}
		}
		cout << (ok ? "YES ": "NO ");
	}
}