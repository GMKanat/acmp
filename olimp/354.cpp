#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)



int main(){
	Speed;
	int n;
	cin >> n;
	vector<char> prime (n+1, true);
	prime[0] = prime[1] = false;
	for (int i=2; i<=n; ++i)
		if (prime[i])
			if (i * 1ll * i <= n)
				for (int j=i*i; j<=n; j+=i)
					prime[j] = false;
	vector<int> ans;
	if(prime[n]){
		cout << n;
		return 0;
	}
	int i = 2;
	while(n != 1){
		if(n % i){
			i++;
		}
		else if(prime[n]){
			ans.push_back(n);
			break;
		}
		else{
			n /= i;
			ans.push_back(i);
		}
	}	
	for(int i = 0; i < ans.size()-1;i++){
		cout << ans[i] << "*";
	}
	cout << ans.back();
}