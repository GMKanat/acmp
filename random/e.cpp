/**
 * 		author:  GMKanat
 * 		created: 08.01.2021 19:24:29
**/
#include <bits/stdc++.h>
using namespace std;

int a, b, c;
int main(){
	cin >> a >> b >> c;
	int k = max(max(a, b), c) - min(min(a, b),c);
	if(k == a || k == b || k == c){
		cout << "YES";
	}
	else cout << "NO";
}
