#include <bits/stdc++.h>
using namespace std;
int Fib(int i){
	int value = 0;
	if(i < 1) return 0;
	if(i == 1) return 1;
	return Fib(i-1) + Fib(i - 2);
}


int main(){
	string s;
	cin >> s;
	s = " "+s;
	for(int i = 2; i < 24; i++){
		if(Fib(i) < s.size()) cout << s[Fib(i)];
	}

}