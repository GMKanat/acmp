#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int gcd(int a, int b){
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
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b);	
}