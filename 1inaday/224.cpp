/**
 * 		author:  GMKanat
 * 		created: 02.01.2021 13:44:45
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

int main(){
	gg;
	cin.tie(0);
    ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	
	cout << max((1ll*a[n-1]*a[n-2]*a[n-3]), (1ll*a[0]*a[1]*a[n-1]));
}