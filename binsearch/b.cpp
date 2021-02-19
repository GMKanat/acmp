#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
long long min(long long a, long long b) {
  if (a <= b) {
    return a;
  } else {
    return b;
  }
}

long long max(long long a, long long b) {
  if (a >= b) {
    return a;
  } else {
    return b;
  }
}


int main(){
	Speed;
	ll n, x, y;
	cin >> n >> x >> y;
	ll l = min(x, y);
	ll r = max(x, y)*n;
	if(n > 1){
		while(l < r){
			ll m = (l+r)>>1;
			if((m/x+m/y + 1) >= n){
				r = m;
			}
			else{
				l = m + 1;
			}
		}
		cout << l + min(x, y);
	}
	else {
    	cout << min(x,y) << endl;
  	}
}