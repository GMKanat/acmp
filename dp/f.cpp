#include <bits/stdc++.h>
using namespace std;
const int N=100010;
int n, k;
int f[100001],a[100001];
int main() {
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	for(int i=2;i<=n;i++){
		f[i]=1e9;
		for(int j=max(i-k,1);j<i;j++){
			f[i]=min(f[i],f[j]+abs(a[i]-a[j]));
		}
	}
	cout<<f[n];
	return 0;
}