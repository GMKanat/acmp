#include <bits/stdc++.h>
using namespace std;

int main(){
	string a, b;
	cin >> a >> b;
	if(a.size()!=b.size()) {
		cout << "No\n";
		return 0;
	}
	for(int i = 0; i < a.size(); i++){
		if(a[i] >= 'A' && a[i] <= 'Z'){
			a[i]+=32;
		}
		if(b[i] >= 'A' && b[i] <= 'Z'){
			b[i]+=32;
		}
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	a == b ? cout << "Yes\n": cout << "No\n";
}