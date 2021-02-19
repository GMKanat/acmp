#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)



main(){
	Speed;
	ll w, h, n, l, r;
	cin >> w >> h >> n;
	l = max(w, h);
	r = min(w, h)*n;
	while(r > l){
		auto c = (r+l)/2;
		if(n <= (c/w)*(c/h)){
			r = c;
		}
		else{
			l = c + 1;
		}
	}	
	cout << l << "\n";
}