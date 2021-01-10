/**
 * 		author:  GMKanat
 * 		created: 07.01.2021 20:57:35
**/
#include <bits/stdc++.h>
using namespace std;

long long a[111];
int main(){
		freopen("input.txt", "r+", stdin);
	long long n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i]; 
	}
	if(n == 1) {
		cout << a[1]; return 0;
	}
	else if(n%2 == 0){
		cout << max(a[n/2], a[n/2 + 1]);
		return 0;
	}
	else {
		sort(a + n/2, a + n/2 + 3);
		cout << a[n/2] << " " << a[n/2+1] << " " << a[n/2 + 2] << " " << a[n/2 + 3] << endl;
		cout << a[n/2 + 1];
	}
}