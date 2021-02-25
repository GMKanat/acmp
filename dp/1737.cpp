#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)



int main(){
	Speed;
	string s;
	cin >> s;
	int n = s.size();
	ll ss = 1;
	for(int i = 2; i <= n; i++){
		ss *= i;
	}
	cout << ss << endl;
}