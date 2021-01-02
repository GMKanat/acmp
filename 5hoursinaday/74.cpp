/**
 * 		author:  GMKanat
 * 		created: 02.01.2021 16:01:46
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

int main(){
	gg;
	int n, pos;
	cin >> n >> pos;
	int s = 0;
	if(pos == 1){
		cout << n;
		return 0;
	}
	while(pos%2){
		s += n/2;
		n -= n/2;
		pos = (pos+1)/2;
	}
	s += pos/2;
	cout << s;
}