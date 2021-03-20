#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	int n;
	cin >> n;
	int a[n]; 
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}		
	int sk[n];
	sk[n-1] = a[n-1];
	for(int i = n - 2; i >= 0; i--){
		sk[i] = a[i] + sk[i+1];
	}	
	long long sj[n];
	sj[n-2] = a[n-2]*sk[n-1];
	for(int i = n - 3; i >= 0; i--){
		sj[i] = sj[i+1] + a[i]*sk[i+1];
	}
	long long s = 0;
	for(int i = 0; i + 2 < n; i++){
		s += a[i]*sj[i + 1];
	}
	cout << s << "\n";
}	