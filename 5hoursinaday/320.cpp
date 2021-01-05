/**
 * 		author:  GMKanat
 * 		created: 05.01.2021 16:26:18
**/
#include <bits/stdc++.h>
using namespace std;
int main(){
	//freopen("input.txt", "r+", stdin); 
	int w, l;
	cin >> w >> l;
	vector <long long> a(1+l, 1);

	for(int i = w; i <= l; i++){
		a[i] = a[i-1] + a[i - w];
		cout << a[i] << " ";
	}
	cout << endl;
	cout << a[l];	
}