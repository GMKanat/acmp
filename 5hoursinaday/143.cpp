/**
 *    author:  GMKanat
 *    created: 02.01.2021 14:59:00
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

int main(){
  gg;
  string a,b;
  cin >> a >> b;
  if (b.length() > a.length()) { 
    cout << "-"; swap(a, b); 
  } 
  else if (b.length() == a.length() && b>a) { 
    cout << "-"; swap(a, b); 
  }
  while (b.length() < a.length()) 
    b = "0" + b;  

  int c = 0;
  for (int i = a.length() - 1; i >= 0; i--) {
   c = c + a[i] - b[i] + 10;
   a[i] = c % 10+'0';
   if (c < 10) c = -1; else c = 0; 
  }
  while (a[0] == '0'&&a.length()>1) a = a.substr(1,a.length() - 1); 

  cout << a;
  return 0;
}
