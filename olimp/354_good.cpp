#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
	Speed;
	int n;
	cin >> n;
	int cnt = 0;
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			if(cnt  == 0){
				cout << i;
			} 
			else{
				cout << "*" << i;
			}
			n/=i;
			cnt++;
		}
	}	
	if(n > 1){
		if(cnt  == 0){
			cout << n;
		} 
		else{
			cout << "*" << n;
		}
	}
}