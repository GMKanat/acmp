/**
 * 		author:  GMKanat
 * 		created: 05.01.2021 00:20:32
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("input.txt", "r+", stdin);
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	cout << s << endl;
	while(next_permutation(s.begin(), s.end())){
		cout << s << endl;
	}
}