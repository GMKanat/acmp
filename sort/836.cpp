#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define gg freopen("input.txt", "r+", stdin);freopen("output.txt", "w+", stdout);
int decimalToOctal(int decimalNumber)
{
    int rem, i = 1, octalNumber = 0;
    while (decimalNumber != 0)
    {
        rem = decimalNumber % 8;
        decimalNumber /= 8;
        octalNumber += rem * i;
        i *= 10;
    }
    return octalNumber;
}
int main()
{
   gg;
   int t;
   cin >> t;
   int q[t+100], w[t+100], c[t+100];
   int cnt = 0;
   for(int i = 0; i < t; i++){
    cin >> q[i];
    w[i] = decimalToOctal(q[i]);
    if(w[i]/100%2==1 && q[i]%2==0){
        c[cnt] = q[i];
        cnt++;
    } 
   }
   cout << cnt << endl;
   sort(c, c+cnt);
   for(int i = 0; i < cnt; i++){
    cout << c[i] << " ";
   }
   return 0;
}
