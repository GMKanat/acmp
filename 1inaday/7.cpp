/**
 * 		author:  GMKanat
 * 		created: 02.01.2021 14:31:11
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);


int main(){
	gg;
	vector <string> v;
	string a, b, c;
	cin >> a >> b >> c;
	int max = 0;
	
	if(a.length() > max){
		max = a.length();
	}
	if(b.length() > max){
		max = b.length();
	}
	if(c.length() > max){
		max = c.length();
	}
	
	if(a.length() == max){
		v.push_back(a);
	}
	if(b.length() == max){
		v.push_back(b);
	}
	if(c.length() == max){
		v.push_back(c);
	}
	sort(v.begin(), v.end());
	cout << v.back();

}