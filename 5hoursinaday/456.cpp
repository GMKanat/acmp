/**
 * 		author:  GMKanat
 * 		created: 01.01.2021 21:33:21
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

int main(){
	gg;
	int n, l;
	cin >> n >> l;	
	vector <int> a(n);
	for(int se = 0; se < l - se; se++){
		for(int fi = se + 1; fi + se <= l; fi++){
			a[0] = fi;
			a[1] = se;
			for(int i = 2; i < n; i++){
				a[i] = a[i - 1] + a[i - 2];
			}
			if(a.back() == l){
				cout << fi << " " << se;
				return 0;
			}
		}
	}
}