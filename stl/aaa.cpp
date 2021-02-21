#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void solve(){
	int n;
	cin >> n;
	vector<pair<int,int>> p(n), l(n);
	for(int i = 0; i < n; i++){
		cin >> p[i].first;
		l[i].second = p[i].first;
	}
	for(int i = 0; i < n; i++){
		cin >> p[i].second;
		l[i].first = p[i].second;
	}
	sort(p.begin(), p.end());
	int mx = 0, cnt = 1;
	for(int i = 0; i < n-1; i++){
		if(p[i+1].second > p[i].second){
			cnt++;
		}
		else{
			cnt = 1;
		}
		mx = max(mx, cnt);
	}	
	for(int i = 0; i < n-1; i++){
		if(l[i+1].second > l[i].second){
			cnt++;
		}
		else{
			cnt = 1;
		}
		mx = max(mx, cnt);
	}	
	cout << mx << "\n";
}

int main(){
    Speed;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}