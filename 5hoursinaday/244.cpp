/**
 * 		author:  GMKanat
 * 		created: 03.01.2021 03:08:18
**/
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
void check(bool e){
	if(!e){
		throw 1;
	}
}

int main(){
	int n, step;
	scanf("%d %d", &n, &step);
	vector <int> a(n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	const int UNDEF = -1;
	int changePos = UNDEF;
	for(int start = 0; start < step; start++){
		int n0 = 0;
		int n1 = 0;
		int pos0 = UNDEF;
		int pos1 = UNDEF;
		for(int i = start; i < n; i += step){
			if(a[i] == 0){
				n0++;
				if(n0 == 1){
					pos0 = i;
				}
				else{
					check(a[i] == 1);
					n1++;
					if(n1 == 1){
						pos1 = i;
					}
				}
			}
		}
		if(n0 == 0 && n1 == 0){
			continue;
		}
		check(n0 > 0 && n1 > 0);
		if((n0 > 1 && n1 > 1) || changePos != UNDEF){
			printf("FAIL\n");
			return 0;
		}
		check(changePos == UNDEF);
		check(n0 == 1 || n1 == 1);
		if(n0 == 1 && n1 == 1){
			changePos = min(pos0, pos1);
		}
		else if(n0 == 1){
			changePos = pos0;
		}
		else{
			check(n1 == 1);
			changePos = pos1;
		}
	}
	printf("OK\n");
	printf("%d", changePos + 1);
}