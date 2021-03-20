#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const int N = 211111;

struct Event {
	int t;
	int enter;
	int i;
	bool operator<(const Event&b) const{
		if(t != b.t) return t < b.t;
		if(enter != b.enter) return enter < b.enter;
		return i < b.i;
	}
};

int n, m, k;
int p[N], w[N], len[N];
vector<Event> es;
set<int> f;

int main(){
	Speed;
	
	cin >> n >> m >> k;
	for(int l, r, i = 0; i < k; i++){
		cin >> l >> r;
		l--; r--;
		es.push_back({l, true, i});
		es.push_back({r, false, i});
		len[i] = r-l;
	}
	es.push_back({0, true, -1});
	sort(es.begin(), es.end());

	for(int i = 0; i < 2*m; i++){
		f.insert(i);
	}
	memset(p, -1, sizeof(p));
	
	for(const Event&e: es){
		if(e.enter){
			if(f.empty())
				continue;
			int x = *f.begin();
			f.erase(x);
			if(e.i != -1){
				p[e.i] = x;
			} 
		}
		else if(p[e.i] != -1){
			f.insert(p[e.i]);
		}
	}
	
	for(int i = 0; i < k; i++){
		if(p[i] >= m){
			w[p[i] - m] += len[i];
		}
	}

	int ans = 0;
	for(int i = 0; i < m; i++){
		if(w[i] < w[ans]){
			ans = i;
		}
	}
	cout << w[ans] << " " << ans + 1;

}