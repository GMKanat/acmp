#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)



main(){
	Speed;
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int k;
	cin >> k;
	int l = 0, r = 40000;
	while(l < r){
		int m = (l+r)/2;
		int cnt = 0, s = 0;
		for(int i = 0; i < n; i++){
			if(s + a[i] <= m){
				s += a[i];
			}
			else{
				cnt++;
				s = a[i];
				if(a[i] > m){
					cnt = k + 1;
					break;
				}
			}
		}
		
		if(cnt <= k - 1){
			r = m;
		}
		else{
			l = m + 1;
		}
	}
	cout << r << "\n";
}