/**
 * 	author:  GMKanat
 * 	created: 17.01.2021 22:32:46
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define NeedForSpeed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int A, B, C;
int main(){
	NeedForSpeed;
	//freopen("input.txt", "r+", stdin);
	int n;
	cin >> n;
	int a, b, c;
	for(int i = 0; i < n; i++){
		cin >> a >> b >> c;
		a += max(B, C);
		b += max(A, C);
		c += max(A, B);
		A = a; B = b; C = c;
	}	
	cout << max(A, max(B, C));
}