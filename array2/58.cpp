/*
	author: GMKanat
	created: 19.12.2020 21:25
*/

#include <bits/stdc++.h>
using namespace std;

bool check(int n, int m){
	int q[n+1][m+1];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> q[i][j];
		}
	}
	for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m-1;j++)
        {
            if((q[i][j]+q[i][j+1]+q[i+1][j]+q[i+1][j+1])%4==0)
            	return false;
        }
    }
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		check(n, m)?cout <<"YES\n":cout<<"NO\n";	
	}
}