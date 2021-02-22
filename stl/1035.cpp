#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)



int main(){
	Speed;
	int n;
	cin >> n;
	vector<int> A(n);
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	int q;
	cin >> q;
	vector<pair<int,int>> V(q);
	for(int i = 0; i < q; i++){
		cin >> V[i].second >> V[i].first;
	}
	int s = 0;
	sort(A.begin(), A.end());
	sort(V.begin(), V.end());
	int i = 0, j = 0;
	while(true){
		if(A[i] <= V[j].second){
			s += V[j].first;
			i++;
			// cout << V[j].first << " ";
		}
		else{
			j++;
		}
		if(j >= (int)V.size() || i >= (int)A.size()){
			break;
		}
	}
	cout << s << "\n";
}