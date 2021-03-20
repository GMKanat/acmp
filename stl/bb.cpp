#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)



int main(){
	Speed;
	ll n;
	cin >> n;
	set<ll> st;
	for(ll i = 2; i * i <= n; i++){
		for(ll j = 2; j < 33; j++){
			if(pow(i, j) <= n){
				st.insert(pow(i, j));
			}
		}
	}
	cout << n - st.size();
	#ifndef LOCAL
		cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	#endif	
	
}