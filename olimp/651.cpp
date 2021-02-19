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

int cnt(int n){
	if(n == 1){
		return 0;
	}
	int k = 2, cnt = 0;
	while(k*k <= n){
		if(n % k == 0){
			cnt++;
			n /= k;
		}
		else k++;
	}
	return cnt + 1;
}

int main(){
	Speed;
	int a, b;
	cin >> a >> b;
	int g = gcd(a,b);
	cout << cnt(a/g)+cnt(b/g);
}