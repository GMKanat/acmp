/***
*       author: GMKanat
*  **   created: 18.12.2020 21:16
****/

#include <bits/stdc++.h>
using namespace std;
#define read freopen("input.txt","r",stdin)
int main()
{
    string s=" ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string a, b;
    cin >> a >> b;
    string k;

    for(int j = 0; j < 26; j++){
        for(int i = 0; i < a.size(); i++){
            if(a[i] - j>64){
                k+=a[i]-j;
            }
            else{
                k+=a[i]+26-j;
            }
        }
        size_t found = k.find(b);
        if(found != string::npos){
            cout << k;
            return 0;
        }
        k="";
    }
    cout <<"IMPOSSIBLE";
    
}