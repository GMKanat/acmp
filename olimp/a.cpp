#include <bits/stdc++.h>

using namespace std;

int main() {

    string a, b;
    cin >> a >> b;
    string a1 = a, b1 = b;
    for(int i = 0; i < (int)a.size(); i++){
        if(isupper(a[i])){
            a[i] = tolower(a[i]);
        }
        if(isupper(b[i])){
            b[i] = tolower(b[i]);
        }
    }
    string ans;
    if(a > b){
        ans = b + a;
    }
    else{
        ans = a + b;
    }
    int sz = ans.size();

    int n=a.size(), m=b.size();
    for (int i = 0;i<n;i++) {
            int q = 0, kl = 0;
            for (int j = i;j<min(n, m+i);j++)
                if (a[j]!=b[q++]) {kl=1;break;}

            if (!kl) {
                string s = a;
                for (int j = q;j<m;j++)
                    s += b[j];
                int x=s.size();
                if (x < sz) {ans=s;sz=x;}
            }
    }    
    // cout << ans << " " << a << "\n";
    ans[0] = toupper(ans[0]);
    string l;
    for(int i = 1; i < (int)ans.size(); i++){
        l += ans[i];
    }
    // cout << l << "\n";
    int k = l.find(a);
    if(k >= 0){
        ans[k+1] = toupper(ans[k + 1]);
        cout << ans;
        return 0;
    }
    k = l.find(b); 
    if(k >= 0){
        ans[k+1] = toupper(ans[k + 1]);
        cout << ans;
        return 0;
    }
    cout << ans;
}