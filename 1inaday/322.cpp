//it is crazy
#include <bits/stdc++.h>
using namespace std;

int main(){
	//freopen("input.txt", "r+", stdin);
	int n;
	cin >> n;
	vector<vector<int>> cost(1+n, vector<int>(1+n));
	for(int from = 0; from < n; from++){
		for(int to = from + 1; to <= n; to++){
			cin >> cost[from][to];
		}
	}	
	vector<int> minPrice(1 + n, INT_MAX);
	minPrice[0] = 0;
	for(int last = 1; last <= n; last++){
		for(int prev = 0; prev < last; prev++){
			minPrice[last] = min(minPrice[last], minPrice[prev] + cost[prev][last]);
			cout << cost[prev][last] << " " << minPrice[last] << endl;
		}
		cout << endl;
	}
	cout << minPrice[n];
}
