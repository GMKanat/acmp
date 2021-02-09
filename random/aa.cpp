/**
 * 	author:  GMKanat
 * 	created: 24.01.2021 10:46:45
**/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define NeedForSpeed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const int MAXN = 100;
int q[111], t, a, b;

int main(){
	NeedForSpeed;
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r+", stdin);
	#endif
	cin >> t;
	while(a > -1){
		string ln; getline(cin, ln);
		stringstream ss(ln);
		ss >> a;
		while(ss >> b){
			q[b] = a;
		}
	}	
	while(t != 0){
		cout << t << " ";
		t = q[t];
	}
}