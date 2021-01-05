/**
 * 		author:  GMKanat
 * 		created: 05.01.2021 15:05:49
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("input.txt", "r+", stdin);
	int n, sis;
	cin >> n >> sis;
	if(n == 1){
		cout << sis; return 0;
	}	
	vector <double> cnt(n + 1);
	cnt[1] = sis - 1;
	cnt[2] = (sis - 1)*sis;
	for(int i = 3; i <= n; i++){
		cnt[i] = (sis - 1)*(cnt[i-1] + cnt[i-2]);
	}
	printf("%.0f", cnt[n]);
}