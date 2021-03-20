#include <bits/stdc++.h>

#define sz(x) ((int)((x).size()))

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const int N = 200179;

struct Event
{
	int t;
	bool enter;
	int i;
	bool operator < (const Event & b) const
	{
		if (t != b.t) return t < b.t;
		if (enter != b.enter) return enter < b.enter;
		return i < b.i;
	}
};

int n, m, k;
int p[N], w[N], len[N];
vector < Event > es;
set < int > f;

int main()
{
	scanf("%d%d%d", &n, &m, &k);
	for (int i = 0; i < k; ++i)
	{
		int l, r;
		scanf("%d%d", &l, &r);
		--l;
		--r;
		es.push_back({l, true, i});
		es.push_back({r, false, i});
		len[i] = r - l;
	}
	es.push_back({0, true, -1});
	sort(es.begin(), es.end());
	for (int i = 0; i < 2*m; ++i)
		f.insert(i);
	
	memset(p, -1, sizeof(p));
	for (const Event & e : es)
		if (e.enter)
		{
			if (f.empty())
				continue;
			int x = *f.begin();
			f.erase(x);
			if (e.i != -1)
				p[e.i] = x;
		} else if (p[e.i] != -1)
			f.insert(p[e.i]);
	for (int i = 0; i < k; ++i)
		if (p[i] >= m)
			w[p[i] - m] += len[i];

	int ans = 0;
	for (int i = 0; i < m; ++i)
		if (w[i] < w[ans])
			ans = i;
	printf("%d %d\n", w[ans], ans + 1);
}
