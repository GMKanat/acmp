#include <bits/stdc++.h>
using namespace std;
	int cnt[1000] ;
int main(){
	int n;
	cin >> n;
	string s[n];
	for(int i = 0; i < n; i++){
		string x; cin >> x;
		s[i]=x;
		
	}

	int t;
	cin >> t;

	while(t--){
		string m;
		cin >> m;
		for(int i = 0; i < n; i++){
			if(s[i].size() == m.size()){
			
				int k = 0;
				for(int j = 0; j < m.size(); j++){
					if(s[i][j] == m[j])
						k++;
				}
				if(k==m.size() - 1) cnt[i]++;
			} 
		} 
		
	}

	for(int i = 0; i < n; i++){
		cout << cnt[i] << endl;
	}
}