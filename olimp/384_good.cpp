#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
const int inf = 1e9;


ll gcd(ll a, ll b){
	while(b > 0){
		if(a > b){
			swap(a, b);
		}
		b = b%a;
	}
	return a;
}



int main(){
	Speed;
	ll a, b;
	cin >> a >> b;
	ll k = gcd(a, b);

	ll f, f1 = 0, f2 = 1;
	while(k--){
		f = (f1 + f2)%inf;
		f1 = f2;
		f2 = f;
	}
	cout << f1;
}