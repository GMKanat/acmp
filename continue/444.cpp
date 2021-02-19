#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
const int MAXN = 2e5;
int n; // число вершин
vector<int> g[MAXN]; // граф
bool used[MAXN];
vector<int> ans;
 
void dfs(int v) {
	used[v] = true;
	for (int i=0; i<g[v].size(); ++i) {
		int to = g[v][i];
		if (!used[to])
			dfs(to);
	}
	ans.push_back(v);
}
 
void topological_sort() {
	for (int i=0; i<n; ++i)
		used[i] = false;
	ans.clear();
	for (int i=0; i<n; ++i)
		if (!used[i])
			dfs(i);
	reverse (ans.begin(), ans.end());
}

main(){
	Speed;
	
	cin >> n;
	int m;
	cin >> m;
	for(int i = 0, x, y; i < m; i++){
		cin >> x >> y;

		g[x].push_back(y);
		g[y].push_back(x);
	}
	topological_sort();
	cout << ans.size() << "\n";
	for(int x: ans){
		cout << x << " ";
	}
}