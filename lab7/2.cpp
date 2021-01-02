#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    int l, r;
    cin >> s >> l >> r;
    if (l < r && r < s.size()){
        t = s.substr(l,r+l+1);
    }
    cout << t;
    return 0;
}