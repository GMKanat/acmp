/**
 * 	author:  GMKanat
 * 	created: 17.01.2021 10:37:44
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define NeedForSpeed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
	NeedForSpeed;
	//freopen("input.txt", "r+", stdin);
	int n;
	cin >> n;
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i > 0){
				a[i][j] += a[i-1][j];
			}
			if(j > 0){
				a[i][j] += a[i][j-1];
			}
			if(j > 0 && i > 0){
				a[i][j] -= a[i-1][j-1];
			}
		}
	}
	int maxsum = INT_MIN;
	for(int i=0; i<n; i++) 
      for(int j=0; j<n; j++)
        for(int k=i; k<n; k++) 
          for(int l=j; l<n; l++) { 
            int sumrec = a[k][l];
            if(i > 0)  
               sumrec -= a[i-1][l];
            if(j > 0)  
               sumrec -= a[k][j-1];
            if(i > 0 && j > 0)  
               sumrec += a[i-1][j-1];

            if(sumrec > maxsum){
               maxsum = sumrec;
            }
        }
        cout << maxsum;
}