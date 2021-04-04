/**
 * 		author:  GMKanat
 * 		created: 02.01.2021 16:07:33
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

int main(){
	gg;
	int a;
	cin >> a;
	string b;
	cin >> b;
	vector<string> v;
	for(int i = 1; i <= a; i++){
		v.push_back(to_string(i));
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++){
		if(v[i] == b){
			cout << i + 1<< endl; 
		}
	}

}