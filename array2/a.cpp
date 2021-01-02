#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int a, b;
	a = (s[0]-'0')*10+s[1]-'0';
	b = (s[3]-'0')*10+s[4]-'0';
	int x, y;
	cin >> x >> y;
	if(y+b > 59){
		printf("%02d:%02d\n", (a+x+1)%24, (y+b)%60);
	}
	else {
		printf("%02d:%02d\n", (a+x)%24, (y+b));
	}
}