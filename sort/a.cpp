/**
 * 		author:  GMKanat
 * 		created: 22.12.2020 18:03:35
**/

#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);
int x, y;
int main(){
   	gg;
	int n;
	cin >> n;
	int q[n];
	for(int i = 0; i < n; i++){
		cin >> q[i];
		if(q[i]%2==1){
			cout << q[i] << " ";
			x++;
		}
	}
	cout << endl;
	for(int i = 0; i < n; i++){
		if(q[i]%2==0){
			cout << q[i] << " ";
			y++; 
		}
	}
	cout << endl;
	x<=y?cout<<"YES":cout<<"NO";
}