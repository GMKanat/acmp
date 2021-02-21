#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)



int main(){
	Speed;
	ll m, n;
	cin >> n >> m;	
	ll a[]={6, 28, 496, 8128, 33550336, 8589869056, 137438691328, 2305843008139952128};
	bool ans = 0;
	for(int i = 0; i < 8; i++){
		if(a[i] >= n && a[i] <= m){
			cout << a[i] << '\n';
			ans = 1;
		}
	}
	if(!ans){
		cout << "Absent" << '\n';
	}
}