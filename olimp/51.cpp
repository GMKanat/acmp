#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)



int main(){
	Speed;
	int n;
	cin >> n;
	string s;
	cin >> s;
	int k = s.size();
	ll ss = 1;
	for(int i = n; i > 0; i-=k){
		ss *= i;
	}
	cout << ss << '\n';
}