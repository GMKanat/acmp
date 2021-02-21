#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)



int main(){
	Speed;
	ll n;
	cin >> n;
	vector<ll> a(32);
	for(int i = 0; i < 32; i++){
		a[31-i] = n&1;
		n = n >> 1;
	}	
	next_permutation(a.begin(), a.end());
	ll ans = 0;
	for(int i = 0; i < 32; i++){
		ans = ans << 1;
		ans += a[i];
	}
	cout << ans << "\n";
}