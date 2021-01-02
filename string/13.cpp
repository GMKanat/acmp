#include <bits/stdc++.h>
using namespace std;

int main(){
	string a, b;
	cin >> a >> b;
	int by = 0, kv = 0;
	for(int i = 0; i < 4; i++){
		if(a[i] == b[i])
			by++;
	}
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			if(a[i] == b[j] && i != j)
				kv++;
		}
	}
	cout << by << " " << kv;
}