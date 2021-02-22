#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int solveFast(int n, int cost[16][16]){
	int work[16]; //worker -> work
	for(int i = 0; i < n; i++){
		work[i] = i;
	}
	int mn = INT_MAX;
	do{
		int sum = 0;
		for(int worker = 0; worker < n; worker++){
			sum += cost[worker][work[worker]];
		}
		mn = min(mn, sum);
	}while(next_permutation(work, work + n));
	return mn;
}


int main(){
	Speed;
	int n;
	cin >> n;
	int cost[16][16];//[worker][work]
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> cost[i][j];
		}
	}
	cout << solveFast(n, cost) << '\n';
}