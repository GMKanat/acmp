#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)


int a[300001], b[300001];
int main(){
	Speed;
	int n, m;
	cin >> n >> m;
	for(int i = 0, x; i < n; i++){
		cin >> x;
		a[x]++;
	}	
	for(int i = 0, x; i < m; i++){
		cin >> x;
		b[x]++;
	}
	for(int i = 0; i <= 100000; i++){
		if(a[i] > 0 && b[i] > 0){
			cout << i << " ";
		}
	}
}