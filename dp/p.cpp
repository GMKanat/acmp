#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define F first
#define S second
#define pb push_back
mt19937 rnd;
 
const int N = 2e5 + 10;
int a[N];
ll dp[N];
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r+", stdin);
	#endif
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        ll ans = 0;
        for (int i = n; i >= 1; i--) {
            if (i + a[i] > n) {
                dp[i] = a[i];
            }
            else {
                dp[i] = a[i] + dp[i + a[i]];
            }
            ans = max(ans, dp[i]);
        }
        cout << ans << "\n";
    }
 
	#ifndef LOCAL
    cerr << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	#endif	
    return 0;
}

