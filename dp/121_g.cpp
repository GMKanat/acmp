#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)



int main(){
	Speed;
	int n;
	cin >> n;
	vector<int> A(n);
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}	
	sort(A.begin(), A.end());
	vector<int> D(n-1);
	for(int i = 0; i < n-1; i++){
		D[i] = A[i+1]-A[i];
	}
	int a = 0, b = 0, c = 0;
	for(int i = 1; i < n-2; i++){
		c = a;
		a = b;
		b = min(c, a) + D[i];
		// cout <<  a << " " << b << "\n";
	}
	// cout << D[0] + D[n-2] << " ";
	cout << D[0] + D[n-2]+min(a, b);
}