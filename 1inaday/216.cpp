/**
 * 		author:  GMKanat
 * 		created: 01.01.2021 21:02:39
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

int main(){
	gg;
	int n;
	cin >> n;
	int s = 0, mx = 0;
	for(int i = 0; i < n; i++){
		int k; cin >> k;
		s += k;
		mx = max(mx, k);
	}
	cout << min(s/2, s - mx);
}