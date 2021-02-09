
#include <bits/stdc++.h>
using namespace std;
const int N = 252;

int f[N][N];
#define ll long long
#define NeedForSpeed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
const double pi = 3.14159265358979323;
int main(){
	NeedForSpeed;
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r+", stdin);
	#endif
	
    f[1][1] = 1;
    f[0][0] = 1;
    for (int i = 2;i <=10;i++)
        for (int j=1;j <= i;j++){
            f[i][j] = (f[i-1][j-1]+f[i-j][j]);
            cout << f[i][j] << " " << i << " " << j << endl;
        }
        cout << endl;
    int n;
    while(cin>>n&&n){
      ll ans=0;
      if(n%2==0){
          for(int i=1;i<=n/2;i++) {
          	cout << f[n/2][i] << " ";
          	ans+=f[n/2][i];

          }
          cout << ans << endl;
      }
      for(int i = n; i >= 1; i -= 2){
          for(int j = 0; j <= i; j++){
          	cout << f[(n-i)/2][j] << " ";
              ans+=f[(n-i)/2][j];
          }
      }

        cout<<endl<<ans<<endl;
    }
}