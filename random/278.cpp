#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int pos = -1;
    for(int i = 0; i < s.size(); ++i){
        pos = t.find(s[i], pos + 1);
        
        if(pos < 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}