#include <iostream>
using namespace std;
int s;
int main(){
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++)
    s += i;
  cout << s + 1;

}