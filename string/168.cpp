#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string k;
	for(int i = 1; i <= n; i++){
		k+=to_string(i);
	}
	string m = to_string(n);
	size_t fand = k.find(m);
	if(fand != string::npos){
		cout << fand + 1;
	}
}