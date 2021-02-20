#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)



int main(){
	Speed;
	ll n;
	cin >> n;
	ll f1 = 1, f2 = 2;
	int i = 3;
	while(f2 < n){
		ll  f = f1 + f2;
		f1 = f2;
		f2 = f;
		i++;
	}	
	if(f2 == n){
		cout << "1\n" << i << '\n';
	}
	else {
		cout << "0\n";
	}
}