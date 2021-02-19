#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)



int main(){
	Speed;
	int m, n;
	cin >> m >> n;
	vector<char> prime (n+1, true);
	prime[0] = prime[1] = false;
	for (int i=2; i<=n; ++i)
		if (prime[i])
			if (i * 1ll * i <= n)
				for (int j=i*i; j<=n; j+=i)
					prime[j] = false;	
	int cnt = 0;
	for(int i = m; i <= n; i++){
		if(prime[i]){
			cout << i << "\n";
			cnt++;
		}
	}

	if(!cnt){
		cout << "Absent" << '\n';
	}
}