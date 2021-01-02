#include <bits/stdc++.h>
using namespace std;

int main(){
	string s, k;
	cin >> s >> k;
	sort(s.begin(), s.end());

	sort(k.begin(), k.end());
	if(s.size() != k.size()){
		cout << "NO";
		return 0;
	}
	s==k ? cout<<"YES":cout<<"NO";
}