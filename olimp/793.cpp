#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int Cnt(int n){
	int cnt = 0;
	while(n > 0){
		cnt += n%10;
		n /= 10;
	}
	return cnt;
}

int main(){
	Speed;
	string ln; 
	getline(cin, ln);
	stringstream ss(ln);
	int a;
	while(ss >> a){
		int i = 2, s1 = 0, s2 = 0;
		s1 = Cnt(a);
		vector<int>ans;
		while(i <= a){
			if(a % i == 0){
				a /= i;
				ans.push_back(i);
			}
			else{
				i++;
			}
		}
		for(int i = 0; i < ans.size(); i++){
			s2 += Cnt(ans[i]);
		}
		if(ans.size() == 1){
			cout << 0;
		}
		else{
			cout << (s1 == s2? 1:0);
		}
	}
}