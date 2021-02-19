#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool prime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	Speed;
	int n;
	cin >> n;
	for(int i = 2; i < n; i++){
		if(prime(i) && prime(n-i)){
			cout << i << " " << n - i;
			return 0;
		}
	}
}	