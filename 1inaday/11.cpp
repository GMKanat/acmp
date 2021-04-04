/**
 * 		author:  GMKanat
 * 		created: 06.01.2021 16:52:44
**/
#include <bits/stdc++.h>
using namespace std;



int main(){
	freopen("input.txt", "r+", stdin);
	int n, k;
	cin >> k >> n;
	vector<double> v(1 + n, 0);
	v[0] = 1;
	for(int i = 1; i <= n; i++){
		for(int j = max(0, i - k); j < i; j++){
			v[i] += v[j];
		}
		printf("%.0f ", v[i]);
	}
	
}