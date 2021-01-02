#include <bits/stdc++.h>
using namespace std;


int main(){
	cin.tie(0);
	
    ios_base::sync_with_stdio(0);
	int n, cur;
	cin >> n >> cur;
	int prev = cur;
	int prevPrev = cur;
	int len = 1;
	int maxLen = 1;
	for(int i = 2; i<=n; i++){
		prevPrev = prev;
		prev = cur;
		cin >> cur;
		if(prev > cur && prev > prevPrev || prev < cur && prev < prevPrev){
			len++;
		}
		else if(prev != cur){
			len = 2;
		}
		else len = 1;
		maxLen = max(maxLen, len);
	}
	cout << maxLen;               

}