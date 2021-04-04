#include <bits/stdc++.h>
using namespace std;
int a[200000];
long long b[200000];
int main(){
	freopen("input.txt", "r+", stdin);
	int t;
	cin>>t;
	while(t--){
		int n;
		long long x=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=n-1;i>=0;i--){
			if(i+a[i]<n){
				b[i]=a[i]+b[i+a[i]];
			}else{
				b[i]=a[i];
			}
			cout << b[i] << " ";
			x=max(x,b[i]);
		}
		cout << endl;
		cout<<x<<endl;
	}
}