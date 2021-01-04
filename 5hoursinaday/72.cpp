/**
 * 		author:  GMKanat
 * 		created: 04.01.2021 17:09:43
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

int main(){
	gg;
	string s;
	cin >> s;
	next_permutation(s.begin(), s.end());
	cout << s;
}